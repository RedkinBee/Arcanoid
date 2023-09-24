// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

TArray<int> UMyBlueprintFunctionLibrary::ArraySortInt(TArray<int> arrayname, bool ascending = false)
{
	if (ascending)
	{
		arrayname.Sort([] (const int&A,const int&B){
			return A<B;}
		);
	}
	else
	{

		arrayname.Sort([] (const int&A,const int&B){
			return A>B;}
		);

	}
	return arrayname;
}
