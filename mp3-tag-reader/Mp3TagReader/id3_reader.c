

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id3_reader.h"
#include "error_handling.h"

TagData* read_id3_tags(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        perror("Error opening file");
        return NULL;
    }

    // Skip 10-byte ID3v2 header
    fseek(fp, 10, SEEK_SET);

    // Loop for 6 frames
    for (int i = 0; i < 6; i++) {
        unsigned char frame_id[5];     // 4 bytes + null terminator
        unsigned char size_bytes[4];   // 4 bytes for frame size
        unsigned int frame_size;
        unsigned char flags[3];        // 3 bytes of flags

        // Read 4-byte Frame ID
        if (fread(frame_id, 1, 4, fp) != 4) break;
        frame_id[4] = '\0';

        // Read 4-byte Frame Size (big-endian)
        if (fread(size_bytes, 1, 4, fp) != 4) break;
        frame_size = (size_bytes[0] << 24) |
                     (size_bytes[1] << 16) |
                     (size_bytes[2] << 8)  |
                     (size_bytes[3]);

        // Skip 3-byte Flags
        if (fread(flags, 1, 3, fp) != 3) break;

        // Allocate buffer for frame data
        unsigned char *data = (unsigned char *)malloc(frame_size);
        if (!data) {
            perror("Memory allocation failed");
            fclose(fp);
            return NULL;
        }

        // Read frame data
        if (fread(data, 1, frame_size, fp) != frame_size) {
            free(data);
            break;
        }

        // Print Frame ID and text (skip encoding byte)
        printf("%s: %s\n", frame_id, data + 1);

        free(data);
    }

    fclose(fp);
    return NULL; // Placeholder until TagData struct is fully implemented
}

/**
 * @brief Displays metadata stored in a TagData structure.
 *
 * This function prints the metadata fields (title, artist, album, etc.)
 * contained in the TagData structure.
 *
 * @param data Pointer to the TagData structure.
 */
void display_metadata(const TagData *data) {
    // Implementation for displaying metadata goes here
if (!data) {
        printf("No metadata available.\n");
        return;
    }

    printf("\n--- MP3 Metadata ---\n");
    if (data->artist)   printf("Artist   : %s\n", data->artist);
    if (data->title)    printf("Title    : %s\n", data->title);
    if (data->album)    printf("Album    : %s\n", data->album);
    if (data->year)     printf("Year     : %s\n", data->year);
    if (data->genre)    printf("Genre    : %s\n", data->genre);
    if (data->composer) printf("Composer : %s\n", data->composer);
    printf("--------------------\n");



}

/**
 * @brief Reads and displays ID3 tags from an MP3 file.
 *
 * This function calls read_id3_tags() to extract metadata from the given file,
 * then displays the metadata using display_metadata(). If reading fails,
 * an error message is shown.
 *
 * @param filename Path to the MP3 file.
 */
void view_tags(const char *filename) {
    TagData *data = read_id3_tags(filename);
    if (!data) {
        display_error("Failed to read ID3 tags.");
        return;
    }
    display_metadata(data);
    free_tag_data(data);
}
void free_tag_data(TagData *data) {
    if (!data) return;
    free(data->artist);
    free(data->title);
    free(data->album);
    free(data->year);
    free(data->genre);
    free(data->composer);
    free(data);
}