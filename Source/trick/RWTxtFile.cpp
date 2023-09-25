// Fill out your copyright notice in the Description page of Project Settings.


#include "RWTxtFile.h"

bool URWTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDevelopersDir() + FileNameA));
}

bool URWTxtFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDevelopersDir() + FileNameB));
}
