
// Generated from PS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  PSLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, IFELSE = 5, IF = 6, DEF = 7, 
    LOOP = 8, REPEAT = 9, START = 10, EXEC = 11, QUIT = 12, FOR = 13, FORALL = 14, 
    STOP = 15, STOPPED = 16, POP = 17, EXCH = 18, DUP = 19, COPY = 20, INDEX = 21, 
    ROLL = 22, CLEAR = 23, COUNT = 24, MARK = 25, CLEARTOMARK = 26, COUNTTOMARK = 27, 
    ADD = 28, DIV = 29, IDIV = 30, MOD = 31, MUL = 32, SUB = 33, ABS = 34, 
    NEG = 35, CEILING = 36, FLOOR = 37, ROUND = 38, TRUNCATE = 39, SQRT = 40, 
    ATAN = 41, COS = 42, SIN = 43, EXP = 44, LN = 45, LOG = 46, RAND = 47, 
    SRAND = 48, RRAND = 49, ARRAY = 50, LENGTH = 51, GET = 52, PUT = 53, 
    GETINTERVAL = 54, PUTINTERVAL = 55, ALOAD = 56, ASTORE = 57, DICT = 58, 
    MAXLENGTH = 59, BEGIN = 60, END = 61, LOAD = 62, STORE = 63, KNOWN = 64, 
    ERRORDICT = 65, SYSTEMDICT = 66, USERDICT = 67, CURRENTDICT = 68, COUNTDICTSTACK = 69, 
    DICTSTACK = 70, STRING = 71, ANCHORSEARCH = 72, SEARCH = 73, TOKEN = 74, 
    EQ = 75, NE = 76, GE = 77, GT = 78, LE = 79, LT = 80, AND = 81, NOT = 82, 
    OR = 83, XOR = 84, TRUE = 85, FALSE = 86, BITSHIFT = 87, EXIT = 88, 
    COUNTEXECSTACK = 89, EXECSTACK = 90, TYPE = 91, CVLIT = 92, CVX = 93, 
    XCHECK = 94, EXECUTEONLY = 95, NOACCESS = 96, READONLY = 97, RCHECK = 98, 
    WCKECK = 99, CVI = 100, CVN = 101, CVR = 102, CVRS = 103, CVS = 104, 
    FILE = 105, CLOSEFILE = 106, READ = 107, WRITE = 108, READHEXSTRING = 109, 
    WRITEHEXSTRING = 110, READSTRING = 111, WRITESTRING = 112, READLINE = 113, 
    BYTESAVAILABLE = 114, FLUSH = 115, FLUSHFILE = 116, RESETFILE = 117, 
    STATUS = 118, RUN = 119, CURRENTFILE = 120, PRINT = 121, POP_OBJECT = 122, 
    POP_OBJECT_PROCEDURE = 123, STACK = 124, PSTACK = 125, PROMPT = 126, 
    ECHO = 127, SAVE = 128, RESTORE = 129, VMSTATUS = 130, BIND = 131, USERTIME = 132, 
    VERSION = 133, GSAVE = 134, GRESTORE = 135, GRESTOREALL = 136, INITGRAPHICS = 137, 
    SETLINEWIDTH = 138, CURRENTLINEWIDTH = 139, SETLINECAP = 140, CURRENTLINECAP = 141, 
    SETLINEJOIN = 142, CURRENTLINEJOIN = 143, SETMITERLIMIT = 144, CURRENTMITERLIMIT = 145, 
    SETDASH = 146, CURRENTDASH = 147, SETFLAT = 148, CURRENTFLAT = 149, 
    SETGRAY = 150, SETHSBCOLOR = 151, CURRENTHSBCOLOR = 152, SETRGBCOLOR = 153, 
    CURRENTRGBCOLOR = 154, SETSCREEN = 155, CURRENTSCREEN = 156, SETTRANSFER = 157, 
    CURRENTTRANSFER = 158, MATRIX = 159, CURRENTMATRIX = 160, WCHECK = 161, 
    CVL = 162, CXV = 163, CVLLT = 164, CURRENTGRAY = 165, INITMATRIX = 166, 
    IDENTMATRIX = 167, DEFAULTMATRIX = 168, SETMATRIX = 169, TRANSLATE = 170, 
    SCALE = 171, ROTATE = 172, CONCAT = 173, CONCATMATRIX = 174, TRANSFORM = 175, 
    DTRANSFORM = 176, ITRANSFORM = 177, IDTRANSFORM = 178, INVERTMATRIX = 179, 
    NEWPATH = 180, CURRENTPOINT = 181, MOVETO = 182, RMOVETO = 183, LINETO = 184, 
    RLINETO = 185, ARC = 186, ARCN = 187, ARCTO = 188, CURVETO = 189, RCURVETO = 190, 
    CLOSEPATH = 191, FLATTENPATH = 192, REVERSEPATH = 193, STROKEPATH = 194, 
    CHARPATH = 195, CLIPPATH = 196, PATHBBOX = 197, PATHFORALL = 198, INITCLIP = 199, 
    CLIP = 200, EOCLIP = 201, ERASEPAGE = 202, FILL = 203, EOFILL = 204, 
    STROKE = 205, IMAGE = 206, IMAGEMASK = 207, SHOWPAGE = 208, COPYPAGE = 209, 
    BANDDEVICE = 210, FRAMEDEVICE = 211, RENDERBANDS = 212, DEFINEFONT = 213, 
    FINDFONT = 214, SCALEFONT = 215, MAKEFONT = 216, SETFONT = 217, CURRENTFONT = 218, 
    SHOW = 219, ASHOW = 220, WIDTHSHOW = 221, AWIDTHSHOW = 222, KSHOW = 223, 
    STRINGWIDTH = 224, FONTDIRECTORY = 225, STANDARDENCODING = 226, CACHESTATUS = 227, 
    SETCACHEDEVICE = 228, SETCHARWIDTH = 229, SETCACHELIMIT = 230, WHERE = 231, 
    PRODECUREDEFNAME = 232, DEFINEDSTRING = 233, NUMBER = 234, INTEGER = 235, 
    DECIMAL_INTEGER = 236, REAL_NUMBER = 237, RADIX_NUMBER = 238, WHITESPACES = 239, 
    COMMENT = 240, STRINGS = 241, PROCEDURESTRING = 242, STRINGSWITHNUMBER = 243
  };

  PSLexer(antlr4::CharStream *input);
  ~PSLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

