cat /etc/passwd | grep "^[^#]" | sed -n "1d;P;N" | cut -d: -f1 | rev | sort -d -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed 's/,$/./' | sed 's/,/, /g' | tr -d "\n"
