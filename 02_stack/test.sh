#! /usr/bin/env bash

./validParentheses ""
./validParentheses "{}()[]"
./validParentheses "({}(abcde)[]{{}{[]()}})"
./validParentheses "({}()[]{{}{[]()}})"
./validParentheses "({}()[]{{}{[]()}"
./validParentheses "({()[]{{}{[]()}})"
./validParentheses "{()[]{{}{[]()}})"
