echo $FT_NBR1
echo $FT_NBR1 | sed "s/'/0/g" | sed 's/\\/1/g; s/\"/2/g; s/?/3/g; s/!/4/g'
a=$(echo $FT_NBR1 | sed "s/'/0/g" | sed 's/\\/1/g; s/\"/2/g; s/?/3/g; s/!/4/g')
echo $a
toB10a=$(echo $((5#$a)))
b=$(echo $FT_NBR2 | sed 's/m/0/g; s/r/1/g; s/d/2/g; s/o/3/g; s/c/4/g')
toB10b=$(echo $((5#$b)))

echo $toB10a+$toB10b

finalBase10=$(echo $toB10a+$toB10b | bc)
echo "sum $finalBase10"
d=$finalBase10
factor=0
remain=0
actualAdd=""
e=""
while [ $d -gt 0 ]
do
factor=$(echo "$d/13" | bc)
remain=$(echo "$d-$factor*13" | bc)
d=$factor
actualAdd=$(echo $remain | sed 's/0/g/g; s/1/t/g; s/2/a/g; s/3/i/g; s/4/o/g; s/5/\ /g; s/6/l/g; s/7/u/g; s/8/S/g; s/9/n/g; s/10/e/g; s/11/m/g; s/12/f/g')
echo "added $actualAdd"
e="$actualAdd$e"
done

echo $e
