ldapsearch -Q "(sn=*bon*)" cn sn | grep "dn: " | wc -l | tr -d " "
