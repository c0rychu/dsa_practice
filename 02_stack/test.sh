#! /usr/bin/env bash

printf "\033[0;32m===  Valid cases  ===\033[0m\n"
./validParentheses ""
./validParentheses "{}()[]"
./validParentheses "({}(abcde)[]{{}{[]()}})"
./validParentheses "({}()[]{{}{[]()}})"

printf "\n\033[0;32m=== Invalid cases ===\033[0m\n"
./validParentheses "({}()[]{{}{[]()}"
./validParentheses "({()[]{{}{[]()}})"
./validParentheses "{()[]{{}{[]()}})"
