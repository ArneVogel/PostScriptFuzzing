grammar PS;

/*
 * Parser Rules
 */

ps
    : ((block | definitions) '\n')+
    ;

definitions
    : PRODECUREDEFNAME ' { ' block* ' } ' DEF
    | PRODECUREDEFNAME block* DEF
    | PRODECUREDEFNAME operations? ' { ' block* ' } ' ' { ' block* ' } ' operations
    | PRODECUREDEFNAME DEFINEDSTRING DEF
    | ' { ' block* ' } ' (' { ' block* ' } ')? operations
    | ' { ' block* ' } '
    | ' [ ' block ' ] '
    | PRODECUREDEFNAME ' '
    | DEFINEDSTRING ' '
    | NUMBER ' '
    ;

procedure
    : STRINGS ' '
    ;

block
    : ((procedure|operations|definitions) ' ')+
    ;

operations
    : POP
    | IFELSE
    | IF
    | LOOP
    | REPEAT
    | EXEC
    | STOP
    | STOPPED
    | START
    | QUIT
    | FOR
    | FORALL
    | EXCH
    | DUP
    | COPY
    | INDEX
    | ROLL
    | CLEAR
    | COUNT
    | MARK
    | CLEARTOMARK
    | COUNTTOMARK
    | ADD
    | DIV
    | IDIV
    | MOD
    | MUL
    | SUB
    | ABS
    | NEG
    | CEILING
    | FLOOR
    | ROUND
    | TRUNCATE
    | SQRT
    | ATAN
    | COS
    | SIN
    | EXP
    | LN
    | LOG
    | RAND
    | SRAND
    | RRAND
    | ARRAY
    | LENGTH
    | GET
    | PUT
    | GETINTERVAL
    | PUTINTERVAL
    | ALOAD
    | ASTORE
    | DICT
    | MAXLENGTH
    | BEGIN
    | END
    | LOAD
    | STORE
    | KNOWN
    | ERRORDICT
    | SYSTEMDICT
    | USERDICT
    | CURRENTDICT
    | COUNTDICTSTACK
    | DICTSTACK
    | STRING
    | ANCHORSEARCH
    | SEARCH
    | TOKEN
    | EQ
    | NE
    | GE
    | GT
    | LE
    | LT
    | AND
    | NOT
    | OR
    | XOR
    | TRUE
    | FALSE
    | BITSHIFT
    | EXIT
    | COUNTEXECSTACK
    | EXECSTACK
    | TYPE
    | CVLIT
    | CVX
    | XCHECK
    | EXECUTEONLY
    | NOACCESS
    | READONLY
    | RCHECK
    | WCKECK
    | CVI
    | CVN
    | CVR
    | CVRS
    | CVS
    | FILE
    | CLOSEFILE
    | READ
    | WRITE
    | READHEXSTRING
    | WRITEHEXSTRING
    | READSTRING
    | WRITESTRING
    | READLINE
    | BYTESAVAILABLE
    | FLUSH
    | FLUSHFILE
    | RESETFILE
    | STATUS
    | RUN
    | CURRENTFILE
    | PRINT
    | POP_OBJECT
    | POP_OBJECT_PROCEDURE
    | STACK
    | PSTACK
    | PROMPT
    | ECHO
    | SAVE
    | RESTORE
    | VMSTATUS
    | BIND
    | USERTIME
    | VERSION
    | GSAVE
    | GRESTORE
    | GRESTOREALL
    | INITGRAPHICS
    | SETLINEWIDTH
    | CURRENTLINEWIDTH
    | SETLINECAP
    | CURRENTLINECAP
    | SETLINEJOIN
    | CURRENTLINEJOIN
    | SETMITERLIMIT
    | CURRENTMITERLIMIT
    | SETDASH
    | CURRENTDASH
    | SETFLAT
    | CURRENTFLAT
    | SETGRAY
    | SETHSBCOLOR
    | CURRENTHSBCOLOR
    | SETRGBCOLOR
    | CURRENTRGBCOLOR
    | SETSCREEN
    | CURRENTSCREEN
    | SETTRANSFER
    | CURRENTTRANSFER
    | MATRIX
    | CURRENTMATRIX
    | WCHECK
    | CVL
    | CXV
    | CVLLT
    | CURRENTGRAY
    | INITMATRIX
    | IDENTMATRIX
    | DEFAULTMATRIX
    | SETMATRIX
    | TRANSLATE
    | SCALE
    | ROTATE
    | CONCAT
    | CONCATMATRIX
    | TRANSFORM
    | DTRANSFORM
    | ITRANSFORM
    | IDTRANSFORM
    | INVERTMATRIX
    | NEWPATH
    | CURRENTPOINT
    | MOVETO
    | RMOVETO
    | LINETO
    | RLINETO
    | ARC
    | ARCN
    | ARCTO
    | CURVETO
    | RCURVETO
    | CLOSEPATH
    | FLATTENPATH
    | REVERSEPATH
    | STROKEPATH
    | CHARPATH
    | CLIPPATH
    | PATHBBOX
    | PATHFORALL
    | INITCLIP
    | CLIP
    | EOCLIP
    | ERASEPAGE
    | FILL
    | EOFILL
    | STROKE
    | IMAGE
    | IMAGEMASK
    | SHOWPAGE
    | COPYPAGE
    | BANDDEVICE
    | FRAMEDEVICE
    | RENDERBANDS
    | DEFINEFONT
    | FINDFONT
    | SCALEFONT
    | MAKEFONT
    | SETFONT
    | CURRENTFONT
    | SHOW
    | ASHOW
    | WIDTHSHOW
    | AWIDTHSHOW
    | KSHOW
    | STRINGWIDTH
    | FONTDIRECTORY
    | STANDARDENCODING
    | CACHESTATUS
    | SETCACHEDEVICE
    | SETCHARWIDTH
    | SETCACHELIMIT
    | WHERE
    ;

/*
 * Lexer Rules
 */

//Keywords:
//[,] omitted just creates an array anyway

IFELSE:                 'ifelse';
IF:                     'if';
DEF:                    'def';
LOOP:                   'loop';
REPEAT:                 'repeat';
START:                  'start';
EXEC:                   'exec';
QUIT:                   'quit';
FOR:                    'for';
FORALL:                 'forall';
STOP:                   'stop';
STOPPED:                'stopped';
POP:                    'pop';
EXCH:                   'exch';
DUP:                    'dup';
COPY:                   'copy';
INDEX:                  'index';
ROLL:                   'roll';
CLEAR:                  'clear';
COUNT:                  'count';
MARK:                   'mark';
CLEARTOMARK:            'cleartomark';
COUNTTOMARK:            'counttomark';
ADD:                    'add';
DIV:                    'div';
IDIV:                   'idiv';
MOD:                    'mod';
MUL:                    'mul';
SUB:                    'sub';
ABS:                    'abs';
NEG:                    'neg';
CEILING:                'ceiling';
FLOOR:                  'floor';
ROUND:                  'round';
TRUNCATE:               'truncate';
SQRT:                   'sqrt';
ATAN:                   'atan';
COS:                    'cos';
SIN:                    'sin';
EXP:                    'exp';
LN:                     'ln';
LOG:                    'log';
RAND:                   'rand';
SRAND:                  'srand';
RRAND:                  'rrand';
ARRAY:                  'array';
LENGTH:                 'length';
GET:                    'get';
PUT:                    'put';
GETINTERVAL:            'getinterval';
PUTINTERVAL:            'putinterval';
ALOAD:                  'aload';
ASTORE:                 'astore';
DICT:                   'dict';
MAXLENGTH:              'maxlength';
BEGIN:                  'begin';
END:                    'end';
LOAD:                   'load';
STORE:                  'store';
KNOWN:                  'known';
ERRORDICT:              'errordict';
SYSTEMDICT:             'systemdict';
USERDICT:               'userdict';
CURRENTDICT:            'currentdict';
COUNTDICTSTACK:         'countdictstack';
DICTSTACK:              'dictstack';
STRING:                 'string';
ANCHORSEARCH:           'anchorsearch';
SEARCH:                 'search';
TOKEN:                  'token';
EQ:                     'eq';
NE:                     'ne';
GE:                     'ge';
GT:                     'gt';
LE:                     'le';
LT:                     'lt';
AND:                    'and';
NOT:                    'not';
OR:                     'or';
XOR:                    'xor';
TRUE:                   'true';
FALSE:                  'false';
BITSHIFT:               'bitshift';
EXIT:                   'exit';
COUNTEXECSTACK:         'countexecstack';
EXECSTACK:              'execstack';
TYPE:                   'type';
CVLIT:                  'cvlit';
CVX:                    'cvx';
XCHECK:                 'xckeck';
EXECUTEONLY:            'executeonly';
NOACCESS:               'noaccess';
READONLY:               'readonly';
RCHECK:                 'rcheck';
WCKECK:                 'wckeck';
CVI:                    'cvi';
CVN:                    'cvn';
CVR:                    'cvr';
CVRS:                   'cvrs';
CVS:                    'cvs';
FILE:                   'file';
CLOSEFILE:              'closefile';
READ:                   'read';
WRITE:                  'write';
READHEXSTRING:          'readhexstring';
WRITEHEXSTRING:         'writehexstring';
READSTRING:             'readstring';
WRITESTRING:            'writestring';
READLINE:               'readline';
BYTESAVAILABLE:         'bytesavailable';
FLUSH:                  'flush';
FLUSHFILE:              'flushfile';
RESETFILE:              'resetfile';
STATUS:                 'status';
RUN:                    'run';
CURRENTFILE:            'currentfile';
PRINT:                  'print';
POP_OBJECT:             '=';
POP_OBJECT_PROCEDURE:   '==';
STACK:                  'stack';
PSTACK:                 'pstack';
PROMPT:                 'prompt';
ECHO:                   'echo';
SAVE:                   'save';
RESTORE:                'restore';
VMSTATUS:               'vmstatus';
BIND:                   'bind';
USERTIME:               'usertime';
VERSION:                'version';
GSAVE:                  'gsave';
GRESTORE:               'grestore';
GRESTOREALL:            'grestoreall';
INITGRAPHICS:           'initgraphics';
SETLINEWIDTH:           'setlinewidth';
CURRENTLINEWIDTH:       'currentlinewidth';
SETLINECAP:             'setlinecap';
CURRENTLINECAP:         'currentlinecap';
SETLINEJOIN:            'setlinejoin';
CURRENTLINEJOIN:        'currentlinejoin';
SETMITERLIMIT:          'setmiterlimit';
CURRENTMITERLIMIT:      'currentmiterlimit';
SETDASH:                'setdash';
CURRENTDASH:            'currentdash';
SETFLAT:                'setflat';
CURRENTFLAT:            'currentflat';
SETGRAY:                'setgray';
SETHSBCOLOR:            'sethsbcolor';
CURRENTHSBCOLOR:        'currenthsbcolor';
SETRGBCOLOR:            'setrgbcolor';
CURRENTRGBCOLOR:        'currentrgbcolor';
SETSCREEN:              'setscreen';
CURRENTSCREEN:          'currentscreen';
SETTRANSFER:            'settransfer';
CURRENTTRANSFER:        'currenttransfer';
MATRIX:                 'matrix';
CURRENTMATRIX:          'currentmatrix';
WCHECK:                 'wcheck';
CVL:                    'cvl';
CXV:                    'cxv';
CVLLT:                  'cvllt';
CURRENTGRAY:            'currentgray';
INITMATRIX:             'initmatrix';
IDENTMATRIX:            'identmatrix';
DEFAULTMATRIX:          'defaultmatrix';
SETMATRIX:              'setmatrix';
TRANSLATE:              'translate';
SCALE:                  'scale';
ROTATE:                 'rotate';
CONCAT:                 'concat';
CONCATMATRIX:           'concatmatrix';
TRANSFORM:              'transofrm';
DTRANSFORM:             'dtransform';
ITRANSFORM:             'itransofrm';
IDTRANSFORM:            'idtransform';
INVERTMATRIX:           'invertmatrix';
NEWPATH:                'newpath';
CURRENTPOINT:           'currentpoint';
MOVETO:                 'moveto';
RMOVETO:                'rmoveto';
LINETO:                 'lineto';
RLINETO:                'rlineto';
ARC:                    'arc';
ARCN:                   'arcn';
ARCTO:                  'arcto';
CURVETO:                'curveto';
RCURVETO:               'rcurveto';
CLOSEPATH:              'closepath';
FLATTENPATH:            'flattenpath';
REVERSEPATH:            'reversepath';
STROKEPATH:             'strokepath';
CHARPATH:               'charpath';
CLIPPATH:               'clippath';
PATHBBOX:               'pathbbox';
PATHFORALL:             'pathforall';
INITCLIP:               'initclip';
CLIP:                   'clip';
EOCLIP:                 'eoclip';
ERASEPAGE:              'erasepage';
FILL:                   'fill';
EOFILL:                 'eofill';
STROKE:                 'stroke';
IMAGE:                  'image';
IMAGEMASK:              'imagemask';
SHOWPAGE:               'showpage';
COPYPAGE:               'copypage';
BANDDEVICE:             'banddevice';
FRAMEDEVICE:            'framdevice';
RENDERBANDS:            'renderbands';
DEFINEFONT:             'definefont';
FINDFONT:               'findfont';
SCALEFONT:              'scalefont';
MAKEFONT:               'makefont';
SETFONT:                'setfont';
CURRENTFONT:            'currentfont';
SHOW:                   'show';
ASHOW:                  'ashow';
WIDTHSHOW:              'widthshow';
AWIDTHSHOW:             'adwidthshow';
KSHOW:                  'kshow';
STRINGWIDTH:            'stringwidth';
FONTDIRECTORY:          'fontdirectory';
STANDARDENCODING:       'standardencoding';
CACHESTATUS:            'cachestatus';
SETCACHEDEVICE:         'setcachedevice';
SETCHARWIDTH:           'setcharwidth';
SETCACHELIMIT:          'setcachelimit';
WHERE:                  'where';

/*
Technically "/NUMBER { PROCEDURE } DEF" doesn't work within the PS Naming conventions.
But you can define to be a number, it just gets ignored.

GS>/5 { 1 2 add } def
GS>/foo { 1 2 add } def
GS>5 foo add =
8

The defined name for 5 just gets discarded, but is a functioning naming
 */
PRODECUREDEFNAME
    : '/' PROCEDURESTRING ' '
    ;

DEFINEDSTRING
 : '<' HEXDIGIT+ '>'                              //Hex String
 ;

NUMBER
 : '-'? INTEGER
 | '-'? REAL_NUMBER
 | '-'? RADIX_NUMBER
 ;

INTEGER
    : DECIMAL_INTEGER
    ;

DECIMAL_INTEGER
 : [0-9]+
 ;

REAL_NUMBER
 : POINT_REAL
 | EXPONENT_REAL
 ;

RADIX_NUMBER
 : '2' '#' [0-1]+
 | '3' '#' [0-2]+
 | '4' '#' [0-3]+
 | '5' '#' [0-4]+
 | '6' '#' [0-5]+
 | '7' '#' [0-6]+
 | '8' '#' [0-7]+
 | '9' '#' [0-8]+
 | '10' '#' [0-9]+
 | '11' '#' [0-9a-aA-A]+
 | '12' '#' [0-9a-bA-B]+
 | '13' '#' [0-9a-cA-C]+
 | '14' '#' [0-9a-dA-D]+
 | '15' '#' [0-9a-eA-E]+
 | '16' '#' [0-9a-fA-F]+
 | '16' '#' [0-9a-gA-G]+
 | '18' '#' [0-9a-hA-H]+
 | '19' '#' [0-9a-iA-I]+
 | '20' '#' [0-9a-jA-J]+
 | '21' '#' [0-9a-kA-K]+
 | '22' '#' [0-9a-lA-L]+
 | '23' '#' [0-9a-mA-M]+
 | '24' '#' [0-9a-nA-N]+
 | '25' '#' [0-9a-oA-O]+
 | '26' '#' [0-9a-pA-P]+
 | '27' '#' [0-9a-qA-Q]+
 | '28' '#' [0-9a-rA-R]+
 | '29' '#' [0-9a-sA-S]+
 | '30' '#' [0-9a-tA-T]+
 | '31' '#' [0-9a-uA-U]+
 | '32' '#' [0-9a-vA-V]+
 | '33' '#' [0-9a-wA-W]+
 | '34' '#' [0-9a-xA-X]+
 | '35' '#' [0-9a-yA-Y]+
 | '36' '#' [0-9a-zA-Z]+
 ;

fragment POINT_REAL
 : INT_PART? FRACTION
 | INT_PART '.'
 ;

fragment INT_PART
 : DIGIT+
 ;

fragment EXPONENT_REAL
 : ( INT_PART | POINT_REAL ) REALEXPONENT
 ;

fragment DIGIT
 : [0-9]
 ;

fragment FRACTION
 : '.' DIGIT+
 ;

fragment REALEXPONENT
 : [eE] [+-]? [0-9]+
 ;

 fragment OCTAL
 : '\\' [0-7][0-7][0-7]
 ;

 fragment HEXDIGIT
 : [0-9a-f]
 ;



WHITESPACES:            [ \t\n\f\r]+ -> channel(HIDDEN);

COMMENT:                '%' ~[\r\n\f]* -> channel(HIDDEN); 

STRINGS
    : ALLCHARS+ ' '
  //  | CHARSWONUMBERS+ ALLCHARS*
    ;

PROCEDURESTRING
    : ALLCHARS+
    ;

STRINGSWITHNUMBER
    : RADIX_NUMBER CHARSWORADIX+
    | INTEGER CHARSWONUMBERSPOINT+
    | POINT_REAL CHARSWONUMBERSPOINT+
    ;

fragment ALLCHARS
    : [a-z]
    ;


fragment CHARSWOPOINTS
    : [a-z]
    ;

fragment CHARSWONUMBERS
    : [a-z]
    ;

fragment CHARSWONUMBERSPOINT
    : [a-z]
    ;

fragment CHARSWORADIX
    : [a-z]
    ;
