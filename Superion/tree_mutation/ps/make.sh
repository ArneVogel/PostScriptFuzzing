rm libTreeMutation.so

java -jar ../xml_parser/antlr-4.7-complete.jar -o . -visitor -no-listener -Dlanguage=Cpp PS.g4 ;

/bin/cp BASIVISITORH PSBaseVisitor.h ; /bin/cp SECONDVISITORH PSSecondVisitor.h ;

for f in *.cpp; do g++ -I ../runtime/src/ -c $f -fPIC -std=c++11; done ;

g++ -shared -std=c++11 *.o ../dist/libantlr4-runtime.a  -o libTreeMutation.so
