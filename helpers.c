// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int num=atoi(&fraction[0]);
    int denum=atoi(&fraction[3]);
    if(num>0&&denum>0&&(denum%2==0))
    {
        return (float) (num/denum);
    }
    else
    {
        return 1;
    }
}
// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int semitone;
    char NOTES=note[0];
    int OCTAVES=note[strlen(note)- 1]- 48;
    if(NOTES=='C')
    {
        semitone=1;
    }
    if(NOTES=='D')
    {
        semitone=3;
    }
    if(NOTES=='E')
    {
        semitone=5;
    }
    if(NOTES=='F')
    {
        semitone=7;
    }
    if(NOTES=='G')
    {
        semitone=9;
    }
    if(NOTES=='A')
    {
        semitone=11;
    }
    if(NOTES=='B')
    {
        semitone=13;
    }
    if(note[1]=='#')
    {
        semitone++;
    }
    if(note[1]=='b')
    {
        semitone--;
    }

//calcul frequency
/*
440*(2^(n/12))
*/
    float freq= 440 * (powf(2,(semitone- 10/ (float) 12)));
    return round (freq * (powf(2, OCTAVES- 4)));
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(strcmp(s,"\0")==0)
    {return true;}
    else
    {return false;}
}