#!/bin/sh
cat /etc/passwd | cut -d'#' -f1 | sed -n "p;n" | rev | sort -r | sed -n -e "${FT_LINE1}${FT_LINE2}p" | tr "\n" "," | sed 's/$/./'