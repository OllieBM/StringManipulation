#pragma once

namespace CStyle
{
    void CopyStr(char* dest, char* src)
    {
        while (*dest++ = *src++);
        return;
    }

    void CopySubStr(char* dest, char* src, size_t size)
    {
        // also consider
        /*for (size_t i = 0U; i < size; ++i)
        {
            dest[i] = src[i];
        }*/
        while (size--)
        {
            *dest++ = *src++;
        }
        return;

        
    }

    int StrLen(char* szString)
    {
        int c = 0; 
        while (*szString++)
            ++c;
        return c;
    }
    void ReverseASentence(char* szString)
    {
        int c = StrLen(szString);
        char* buffer = new char[c + 1];
        buffer[c] = 0;

        char* pTail = szString + c-1; 
        char* pBuffer = buffer;
        char* pLastSpace = pTail;

        while (--pTail > szString)
        {
            if (*pTail == ' ')
            {
             
                int distance = pLastSpace - pTail;
                CopySubStr(pBuffer, pTail + 1, distance);
                pBuffer += distance;
                *pBuffer = *pTail;
                pBuffer++;
                pLastSpace = pTail;

                printf("%s\n", buffer);
            }
        }
        CopySubStr(pBuffer, pTail, pLastSpace - pTail);
        CopyStr(szString, buffer);
        delete[] buffer;
    }


}
