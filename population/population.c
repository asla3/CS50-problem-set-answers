#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int initialLlamaPopulation;
    do {
       initialLlamaPopulation =  get_int("What's the initial population of llamas? ");
    } while (initialLlamaPopulation < 9);
    // TODO: Prompt for end size
    int lastLlamaPopulation;
    do {
        lastLlamaPopulation = get_int("what's the ending population? ");
    } while (lastLlamaPopulation < initialLlamaPopulation);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (initialLlamaPopulation < lastLlamaPopulation) {
        int bornLlamas = initialLlamaPopulation / 3;
        int deadLlamas = initialLlamaPopulation / 4;
        initialLlamaPopulation += (bornLlamas - deadLlamas);
        years++;
    }
    // TODO: Print number of years
    printf("The amount of years that it would take for the llama population to grow is %i\n", years);
}