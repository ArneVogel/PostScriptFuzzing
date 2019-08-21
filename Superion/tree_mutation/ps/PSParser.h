
// Generated from PS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  PSParser : public antlr4::Parser {
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

  enum {
    RulePs = 0, RuleDefinitions = 1, RuleProcedure = 2, RuleBlock = 3, RuleOperations = 4
  };

  PSParser(antlr4::TokenStream *input);
  ~PSParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class PsContext;
  class DefinitionsContext;
  class ProcedureContext;
  class BlockContext;
  class OperationsContext; 

  class  PsContext : public antlr4::ParserRuleContext {
  public:
    PsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<DefinitionsContext *> definitions();
    DefinitionsContext* definitions(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PsContext* ps();

  class  DefinitionsContext : public antlr4::ParserRuleContext {
  public:
    DefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODECUREDEFNAME();
    antlr4::tree::TerminalNode *DEF();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<OperationsContext *> operations();
    OperationsContext* operations(size_t i);
    antlr4::tree::TerminalNode *DEFINEDSTRING();
    antlr4::tree::TerminalNode *NUMBER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionsContext* definitions();

  class  ProcedureContext : public antlr4::ParserRuleContext {
  public:
    ProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureContext* procedure();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProcedureContext *> procedure();
    ProcedureContext* procedure(size_t i);
    std::vector<OperationsContext *> operations();
    OperationsContext* operations(size_t i);
    std::vector<DefinitionsContext *> definitions();
    DefinitionsContext* definitions(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  OperationsContext : public antlr4::ParserRuleContext {
  public:
    OperationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POP();
    antlr4::tree::TerminalNode *IFELSE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STOPPED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *QUIT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *EXCH();
    antlr4::tree::TerminalNode *DUP();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *ROLL();
    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *CLEARTOMARK();
    antlr4::tree::TerminalNode *COUNTTOMARK();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *IDIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *NEG();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *SRAND();
    antlr4::tree::TerminalNode *RRAND();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *PUT();
    antlr4::tree::TerminalNode *GETINTERVAL();
    antlr4::tree::TerminalNode *PUTINTERVAL();
    antlr4::tree::TerminalNode *ALOAD();
    antlr4::tree::TerminalNode *ASTORE();
    antlr4::tree::TerminalNode *DICT();
    antlr4::tree::TerminalNode *MAXLENGTH();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *STORE();
    antlr4::tree::TerminalNode *KNOWN();
    antlr4::tree::TerminalNode *ERRORDICT();
    antlr4::tree::TerminalNode *SYSTEMDICT();
    antlr4::tree::TerminalNode *USERDICT();
    antlr4::tree::TerminalNode *CURRENTDICT();
    antlr4::tree::TerminalNode *COUNTDICTSTACK();
    antlr4::tree::TerminalNode *DICTSTACK();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ANCHORSEARCH();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *BITSHIFT();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *COUNTEXECSTACK();
    antlr4::tree::TerminalNode *EXECSTACK();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *CVLIT();
    antlr4::tree::TerminalNode *CVX();
    antlr4::tree::TerminalNode *XCHECK();
    antlr4::tree::TerminalNode *EXECUTEONLY();
    antlr4::tree::TerminalNode *NOACCESS();
    antlr4::tree::TerminalNode *READONLY();
    antlr4::tree::TerminalNode *RCHECK();
    antlr4::tree::TerminalNode *WCKECK();
    antlr4::tree::TerminalNode *CVI();
    antlr4::tree::TerminalNode *CVN();
    antlr4::tree::TerminalNode *CVR();
    antlr4::tree::TerminalNode *CVRS();
    antlr4::tree::TerminalNode *CVS();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *CLOSEFILE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *READHEXSTRING();
    antlr4::tree::TerminalNode *WRITEHEXSTRING();
    antlr4::tree::TerminalNode *READSTRING();
    antlr4::tree::TerminalNode *WRITESTRING();
    antlr4::tree::TerminalNode *READLINE();
    antlr4::tree::TerminalNode *BYTESAVAILABLE();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FLUSHFILE();
    antlr4::tree::TerminalNode *RESETFILE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *RUN();
    antlr4::tree::TerminalNode *CURRENTFILE();
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *POP_OBJECT();
    antlr4::tree::TerminalNode *POP_OBJECT_PROCEDURE();
    antlr4::tree::TerminalNode *STACK();
    antlr4::tree::TerminalNode *PSTACK();
    antlr4::tree::TerminalNode *PROMPT();
    antlr4::tree::TerminalNode *ECHO();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *VMSTATUS();
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *USERTIME();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *GSAVE();
    antlr4::tree::TerminalNode *GRESTORE();
    antlr4::tree::TerminalNode *GRESTOREALL();
    antlr4::tree::TerminalNode *INITGRAPHICS();
    antlr4::tree::TerminalNode *SETLINEWIDTH();
    antlr4::tree::TerminalNode *CURRENTLINEWIDTH();
    antlr4::tree::TerminalNode *SETLINECAP();
    antlr4::tree::TerminalNode *CURRENTLINECAP();
    antlr4::tree::TerminalNode *SETLINEJOIN();
    antlr4::tree::TerminalNode *CURRENTLINEJOIN();
    antlr4::tree::TerminalNode *SETMITERLIMIT();
    antlr4::tree::TerminalNode *CURRENTMITERLIMIT();
    antlr4::tree::TerminalNode *SETDASH();
    antlr4::tree::TerminalNode *CURRENTDASH();
    antlr4::tree::TerminalNode *SETFLAT();
    antlr4::tree::TerminalNode *CURRENTFLAT();
    antlr4::tree::TerminalNode *SETGRAY();
    antlr4::tree::TerminalNode *SETHSBCOLOR();
    antlr4::tree::TerminalNode *CURRENTHSBCOLOR();
    antlr4::tree::TerminalNode *SETRGBCOLOR();
    antlr4::tree::TerminalNode *CURRENTRGBCOLOR();
    antlr4::tree::TerminalNode *SETSCREEN();
    antlr4::tree::TerminalNode *CURRENTSCREEN();
    antlr4::tree::TerminalNode *SETTRANSFER();
    antlr4::tree::TerminalNode *CURRENTTRANSFER();
    antlr4::tree::TerminalNode *MATRIX();
    antlr4::tree::TerminalNode *CURRENTMATRIX();
    antlr4::tree::TerminalNode *WCHECK();
    antlr4::tree::TerminalNode *CVL();
    antlr4::tree::TerminalNode *CXV();
    antlr4::tree::TerminalNode *CVLLT();
    antlr4::tree::TerminalNode *CURRENTGRAY();
    antlr4::tree::TerminalNode *INITMATRIX();
    antlr4::tree::TerminalNode *IDENTMATRIX();
    antlr4::tree::TerminalNode *DEFAULTMATRIX();
    antlr4::tree::TerminalNode *SETMATRIX();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *SCALE();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCATMATRIX();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *DTRANSFORM();
    antlr4::tree::TerminalNode *ITRANSFORM();
    antlr4::tree::TerminalNode *IDTRANSFORM();
    antlr4::tree::TerminalNode *INVERTMATRIX();
    antlr4::tree::TerminalNode *NEWPATH();
    antlr4::tree::TerminalNode *CURRENTPOINT();
    antlr4::tree::TerminalNode *MOVETO();
    antlr4::tree::TerminalNode *RMOVETO();
    antlr4::tree::TerminalNode *LINETO();
    antlr4::tree::TerminalNode *RLINETO();
    antlr4::tree::TerminalNode *ARC();
    antlr4::tree::TerminalNode *ARCN();
    antlr4::tree::TerminalNode *ARCTO();
    antlr4::tree::TerminalNode *CURVETO();
    antlr4::tree::TerminalNode *RCURVETO();
    antlr4::tree::TerminalNode *CLOSEPATH();
    antlr4::tree::TerminalNode *FLATTENPATH();
    antlr4::tree::TerminalNode *REVERSEPATH();
    antlr4::tree::TerminalNode *STROKEPATH();
    antlr4::tree::TerminalNode *CHARPATH();
    antlr4::tree::TerminalNode *CLIPPATH();
    antlr4::tree::TerminalNode *PATHBBOX();
    antlr4::tree::TerminalNode *PATHFORALL();
    antlr4::tree::TerminalNode *INITCLIP();
    antlr4::tree::TerminalNode *CLIP();
    antlr4::tree::TerminalNode *EOCLIP();
    antlr4::tree::TerminalNode *ERASEPAGE();
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *EOFILL();
    antlr4::tree::TerminalNode *STROKE();
    antlr4::tree::TerminalNode *IMAGE();
    antlr4::tree::TerminalNode *IMAGEMASK();
    antlr4::tree::TerminalNode *SHOWPAGE();
    antlr4::tree::TerminalNode *COPYPAGE();
    antlr4::tree::TerminalNode *BANDDEVICE();
    antlr4::tree::TerminalNode *FRAMEDEVICE();
    antlr4::tree::TerminalNode *RENDERBANDS();
    antlr4::tree::TerminalNode *DEFINEFONT();
    antlr4::tree::TerminalNode *FINDFONT();
    antlr4::tree::TerminalNode *SCALEFONT();
    antlr4::tree::TerminalNode *MAKEFONT();
    antlr4::tree::TerminalNode *SETFONT();
    antlr4::tree::TerminalNode *CURRENTFONT();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ASHOW();
    antlr4::tree::TerminalNode *WIDTHSHOW();
    antlr4::tree::TerminalNode *AWIDTHSHOW();
    antlr4::tree::TerminalNode *KSHOW();
    antlr4::tree::TerminalNode *STRINGWIDTH();
    antlr4::tree::TerminalNode *FONTDIRECTORY();
    antlr4::tree::TerminalNode *STANDARDENCODING();
    antlr4::tree::TerminalNode *CACHESTATUS();
    antlr4::tree::TerminalNode *SETCACHEDEVICE();
    antlr4::tree::TerminalNode *SETCHARWIDTH();
    antlr4::tree::TerminalNode *SETCACHELIMIT();
    antlr4::tree::TerminalNode *WHERE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperationsContext* operations();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

