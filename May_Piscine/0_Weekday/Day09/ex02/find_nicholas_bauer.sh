#!/bin/sh
cat $1 | grep -i -E '(\t|\s)*Nicolas(\t|\s)+Bauer' | grep -E -i '\([0-9]{3}\)[0-9]{3}\-[0-9]{4}' | cut -f4 -d$'\t'
