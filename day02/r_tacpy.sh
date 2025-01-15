#!/bin/bash

cut -d ':' -f 1 | sed -n 'n;p' | rev | sort -r | sed -n "$MY_LINE1,$MY_LINE2 p" | xargs | sed -e 's/ /, /g' | tr -d '\n' && echo '.'
