#!/bin/bash
if [  $(echo -n "$1" | wc -c) -eq 3 ]; then
    cut -d ";" -f 3 | grep -i "$1" | wc -w
    exit 0
fi
cut -d ";" -f 3 | wc -w
