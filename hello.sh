i=1
echo "enter the limit"
read n
for i in ` seq $n `
do
for j in ` seq 10 `
do
c=` expr $i \* $j `
echo "$i * $j = $c"
done
done


