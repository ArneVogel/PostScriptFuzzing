cat $1 | sed '/Error:\ \//!d' | sed '/%%%%/d'| awk '{split($0, a, " ");print(a[2])}' | sort | uniq -c | sort -n
 
