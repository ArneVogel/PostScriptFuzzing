echo "Total:"
cat $1 | sed '/GPL Ghostscript/!d' | wc -l
echo "Failures:"
cat $1 | sed '/Error:\ \//!d' | wc -l
