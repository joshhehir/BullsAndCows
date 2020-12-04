// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bulls and Cows!"));
    PrintLine(TEXT("Guess the 4 letter word")); //number needs to change later
    PrintLine(TEXT("Press enter to continue..."));

    SetupGame(); //setting up game;
    
}

void UBullCowCartridge::OnInput(const FString & Input) // When the player hits enter
{
    ClearScreen();
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        PrintLine(TEXT("You have Lost!"));
    }
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4; 
}
