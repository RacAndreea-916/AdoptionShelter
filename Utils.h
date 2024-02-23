//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_UTILS_H
#define A7_RACANDREEA_916_1_UTILS_H
#pragma once
#include <string>
#include <vector>

/*
	Trims leading and trailing spaces from a string.
	Input: s - string
	Output: a string, with no leading and trailing spaces.
*/
std::string trim(const std::string& s);

/*
	Tokenizes a string.
	Input:	str - the string to be tokenized.
	delimiter - char - the delimiter used for tokenization
	Output: a vector of strings, containing the tokens
*/
std::vector<std::string> tokenize(const std::string& str, char delimiter);

#endif //A7_RACANDREEA_916_1_UTILS_H
