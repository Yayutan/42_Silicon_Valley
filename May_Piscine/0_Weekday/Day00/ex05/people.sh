ldapsearch -LLL -Q "(uid=z*)" cn | grep -e "cn:" | cut -f 2- -d " " | sort -r
