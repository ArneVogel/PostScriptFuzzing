grammarinator-generate -l parsers/PSUnlexer.py -p parsers/PSUnparser.py -r ps -d 10000 -o output/test_%d.ps -n 100;
find output/ -size -2b -type f -delete
./remove_double_spaces.py
./remove_trivial_errors.sh
