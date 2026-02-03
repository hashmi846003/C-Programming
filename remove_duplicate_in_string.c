void removeDuplicates(char str[])
{
    int visited[256] = {0}; //possible unsigned characters
    int index = 0;  //set pointer at firest element

    for (int i = 0; str[i] != '\0'; i++)  //iterate through the loop
    {
        unsigned char ch = str[i]; //saving the value of string character by character in unsigned character ch   

        if (!visited[ch])               //if the value has not been set by character then set it
        {
            visited[ch] = 1;
            str[index++] = ch;             //increment the value of index to next element
        }
    }
    str[index] = '\0';
}
