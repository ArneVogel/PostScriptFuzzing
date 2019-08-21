
// Generated from PS.g4 by ANTLR 4.7


#include "PSVisitor.h"

#include "PSParser.h"


using namespace antlrcpp;
using namespace antlr4;

PSParser::PSParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PSParser::~PSParser() {
  delete _interpreter;
}

std::string PSParser::getGrammarFileName() const {
  return "PS.g4";
}

const std::vector<std::string>& PSParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PSParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PsContext ------------------------------------------------------------------

PSParser::PsContext::PsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PSParser::BlockContext *> PSParser::PsContext::block() {
  return getRuleContexts<PSParser::BlockContext>();
}

PSParser::BlockContext* PSParser::PsContext::block(size_t i) {
  return getRuleContext<PSParser::BlockContext>(i);
}

std::vector<PSParser::DefinitionsContext *> PSParser::PsContext::definitions() {
  return getRuleContexts<PSParser::DefinitionsContext>();
}

PSParser::DefinitionsContext* PSParser::PsContext::definitions(size_t i) {
  return getRuleContext<PSParser::DefinitionsContext>(i);
}


size_t PSParser::PsContext::getRuleIndex() const {
  return PSParser::RulePs;
}

antlrcpp::Any PSParser::PsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PSVisitor*>(visitor))
    return parserVisitor->visitPs(this);
  else
    return visitor->visitChildren(this);
}

PSParser::PsContext* PSParser::ps() {
  PsContext *_localctx = _tracker.createInstance<PsContext>(_ctx, getState());
  enterRule(_localctx, 0, PSParser::RulePs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PSParser::T__0)
      | (1ULL << PSParser::T__2)
      | (1ULL << PSParser::IFELSE)
      | (1ULL << PSParser::IF)
      | (1ULL << PSParser::LOOP)
      | (1ULL << PSParser::REPEAT)
      | (1ULL << PSParser::START)
      | (1ULL << PSParser::EXEC)
      | (1ULL << PSParser::QUIT)
      | (1ULL << PSParser::FOR)
      | (1ULL << PSParser::FORALL)
      | (1ULL << PSParser::STOP)
      | (1ULL << PSParser::STOPPED)
      | (1ULL << PSParser::POP)
      | (1ULL << PSParser::EXCH)
      | (1ULL << PSParser::DUP)
      | (1ULL << PSParser::COPY)
      | (1ULL << PSParser::INDEX)
      | (1ULL << PSParser::ROLL)
      | (1ULL << PSParser::CLEAR)
      | (1ULL << PSParser::COUNT)
      | (1ULL << PSParser::MARK)
      | (1ULL << PSParser::CLEARTOMARK)
      | (1ULL << PSParser::COUNTTOMARK)
      | (1ULL << PSParser::ADD)
      | (1ULL << PSParser::DIV)
      | (1ULL << PSParser::IDIV)
      | (1ULL << PSParser::MOD)
      | (1ULL << PSParser::MUL)
      | (1ULL << PSParser::SUB)
      | (1ULL << PSParser::ABS)
      | (1ULL << PSParser::NEG)
      | (1ULL << PSParser::CEILING)
      | (1ULL << PSParser::FLOOR)
      | (1ULL << PSParser::ROUND)
      | (1ULL << PSParser::TRUNCATE)
      | (1ULL << PSParser::SQRT)
      | (1ULL << PSParser::ATAN)
      | (1ULL << PSParser::COS)
      | (1ULL << PSParser::SIN)
      | (1ULL << PSParser::EXP)
      | (1ULL << PSParser::LN)
      | (1ULL << PSParser::LOG)
      | (1ULL << PSParser::RAND)
      | (1ULL << PSParser::SRAND)
      | (1ULL << PSParser::RRAND)
      | (1ULL << PSParser::ARRAY)
      | (1ULL << PSParser::LENGTH)
      | (1ULL << PSParser::GET)
      | (1ULL << PSParser::PUT)
      | (1ULL << PSParser::GETINTERVAL)
      | (1ULL << PSParser::PUTINTERVAL)
      | (1ULL << PSParser::ALOAD)
      | (1ULL << PSParser::ASTORE)
      | (1ULL << PSParser::DICT)
      | (1ULL << PSParser::MAXLENGTH)
      | (1ULL << PSParser::BEGIN)
      | (1ULL << PSParser::END)
      | (1ULL << PSParser::LOAD)
      | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
      | (1ULL << (PSParser::ERRORDICT - 64))
      | (1ULL << (PSParser::SYSTEMDICT - 64))
      | (1ULL << (PSParser::USERDICT - 64))
      | (1ULL << (PSParser::CURRENTDICT - 64))
      | (1ULL << (PSParser::COUNTDICTSTACK - 64))
      | (1ULL << (PSParser::DICTSTACK - 64))
      | (1ULL << (PSParser::STRING - 64))
      | (1ULL << (PSParser::ANCHORSEARCH - 64))
      | (1ULL << (PSParser::SEARCH - 64))
      | (1ULL << (PSParser::TOKEN - 64))
      | (1ULL << (PSParser::EQ - 64))
      | (1ULL << (PSParser::NE - 64))
      | (1ULL << (PSParser::GE - 64))
      | (1ULL << (PSParser::GT - 64))
      | (1ULL << (PSParser::LE - 64))
      | (1ULL << (PSParser::LT - 64))
      | (1ULL << (PSParser::AND - 64))
      | (1ULL << (PSParser::NOT - 64))
      | (1ULL << (PSParser::OR - 64))
      | (1ULL << (PSParser::XOR - 64))
      | (1ULL << (PSParser::TRUE - 64))
      | (1ULL << (PSParser::FALSE - 64))
      | (1ULL << (PSParser::BITSHIFT - 64))
      | (1ULL << (PSParser::EXIT - 64))
      | (1ULL << (PSParser::COUNTEXECSTACK - 64))
      | (1ULL << (PSParser::EXECSTACK - 64))
      | (1ULL << (PSParser::TYPE - 64))
      | (1ULL << (PSParser::CVLIT - 64))
      | (1ULL << (PSParser::CVX - 64))
      | (1ULL << (PSParser::XCHECK - 64))
      | (1ULL << (PSParser::EXECUTEONLY - 64))
      | (1ULL << (PSParser::NOACCESS - 64))
      | (1ULL << (PSParser::READONLY - 64))
      | (1ULL << (PSParser::RCHECK - 64))
      | (1ULL << (PSParser::WCKECK - 64))
      | (1ULL << (PSParser::CVI - 64))
      | (1ULL << (PSParser::CVN - 64))
      | (1ULL << (PSParser::CVR - 64))
      | (1ULL << (PSParser::CVRS - 64))
      | (1ULL << (PSParser::CVS - 64))
      | (1ULL << (PSParser::FILE - 64))
      | (1ULL << (PSParser::CLOSEFILE - 64))
      | (1ULL << (PSParser::READ - 64))
      | (1ULL << (PSParser::WRITE - 64))
      | (1ULL << (PSParser::READHEXSTRING - 64))
      | (1ULL << (PSParser::WRITEHEXSTRING - 64))
      | (1ULL << (PSParser::READSTRING - 64))
      | (1ULL << (PSParser::WRITESTRING - 64))
      | (1ULL << (PSParser::READLINE - 64))
      | (1ULL << (PSParser::BYTESAVAILABLE - 64))
      | (1ULL << (PSParser::FLUSH - 64))
      | (1ULL << (PSParser::FLUSHFILE - 64))
      | (1ULL << (PSParser::RESETFILE - 64))
      | (1ULL << (PSParser::STATUS - 64))
      | (1ULL << (PSParser::RUN - 64))
      | (1ULL << (PSParser::CURRENTFILE - 64))
      | (1ULL << (PSParser::PRINT - 64))
      | (1ULL << (PSParser::POP_OBJECT - 64))
      | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
      | (1ULL << (PSParser::STACK - 64))
      | (1ULL << (PSParser::PSTACK - 64))
      | (1ULL << (PSParser::PROMPT - 64))
      | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
      | (1ULL << (PSParser::RESTORE - 128))
      | (1ULL << (PSParser::VMSTATUS - 128))
      | (1ULL << (PSParser::BIND - 128))
      | (1ULL << (PSParser::USERTIME - 128))
      | (1ULL << (PSParser::VERSION - 128))
      | (1ULL << (PSParser::GSAVE - 128))
      | (1ULL << (PSParser::GRESTORE - 128))
      | (1ULL << (PSParser::GRESTOREALL - 128))
      | (1ULL << (PSParser::INITGRAPHICS - 128))
      | (1ULL << (PSParser::SETLINEWIDTH - 128))
      | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
      | (1ULL << (PSParser::SETLINECAP - 128))
      | (1ULL << (PSParser::CURRENTLINECAP - 128))
      | (1ULL << (PSParser::SETLINEJOIN - 128))
      | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
      | (1ULL << (PSParser::SETMITERLIMIT - 128))
      | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
      | (1ULL << (PSParser::SETDASH - 128))
      | (1ULL << (PSParser::CURRENTDASH - 128))
      | (1ULL << (PSParser::SETFLAT - 128))
      | (1ULL << (PSParser::CURRENTFLAT - 128))
      | (1ULL << (PSParser::SETGRAY - 128))
      | (1ULL << (PSParser::SETHSBCOLOR - 128))
      | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
      | (1ULL << (PSParser::SETRGBCOLOR - 128))
      | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
      | (1ULL << (PSParser::SETSCREEN - 128))
      | (1ULL << (PSParser::CURRENTSCREEN - 128))
      | (1ULL << (PSParser::SETTRANSFER - 128))
      | (1ULL << (PSParser::CURRENTTRANSFER - 128))
      | (1ULL << (PSParser::MATRIX - 128))
      | (1ULL << (PSParser::CURRENTMATRIX - 128))
      | (1ULL << (PSParser::WCHECK - 128))
      | (1ULL << (PSParser::CVL - 128))
      | (1ULL << (PSParser::CXV - 128))
      | (1ULL << (PSParser::CVLLT - 128))
      | (1ULL << (PSParser::CURRENTGRAY - 128))
      | (1ULL << (PSParser::INITMATRIX - 128))
      | (1ULL << (PSParser::IDENTMATRIX - 128))
      | (1ULL << (PSParser::DEFAULTMATRIX - 128))
      | (1ULL << (PSParser::SETMATRIX - 128))
      | (1ULL << (PSParser::TRANSLATE - 128))
      | (1ULL << (PSParser::SCALE - 128))
      | (1ULL << (PSParser::ROTATE - 128))
      | (1ULL << (PSParser::CONCAT - 128))
      | (1ULL << (PSParser::CONCATMATRIX - 128))
      | (1ULL << (PSParser::TRANSFORM - 128))
      | (1ULL << (PSParser::DTRANSFORM - 128))
      | (1ULL << (PSParser::ITRANSFORM - 128))
      | (1ULL << (PSParser::IDTRANSFORM - 128))
      | (1ULL << (PSParser::INVERTMATRIX - 128))
      | (1ULL << (PSParser::NEWPATH - 128))
      | (1ULL << (PSParser::CURRENTPOINT - 128))
      | (1ULL << (PSParser::MOVETO - 128))
      | (1ULL << (PSParser::RMOVETO - 128))
      | (1ULL << (PSParser::LINETO - 128))
      | (1ULL << (PSParser::RLINETO - 128))
      | (1ULL << (PSParser::ARC - 128))
      | (1ULL << (PSParser::ARCN - 128))
      | (1ULL << (PSParser::ARCTO - 128))
      | (1ULL << (PSParser::CURVETO - 128))
      | (1ULL << (PSParser::RCURVETO - 128))
      | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
      | (1ULL << (PSParser::REVERSEPATH - 192))
      | (1ULL << (PSParser::STROKEPATH - 192))
      | (1ULL << (PSParser::CHARPATH - 192))
      | (1ULL << (PSParser::CLIPPATH - 192))
      | (1ULL << (PSParser::PATHBBOX - 192))
      | (1ULL << (PSParser::PATHFORALL - 192))
      | (1ULL << (PSParser::INITCLIP - 192))
      | (1ULL << (PSParser::CLIP - 192))
      | (1ULL << (PSParser::EOCLIP - 192))
      | (1ULL << (PSParser::ERASEPAGE - 192))
      | (1ULL << (PSParser::FILL - 192))
      | (1ULL << (PSParser::EOFILL - 192))
      | (1ULL << (PSParser::STROKE - 192))
      | (1ULL << (PSParser::IMAGE - 192))
      | (1ULL << (PSParser::IMAGEMASK - 192))
      | (1ULL << (PSParser::SHOWPAGE - 192))
      | (1ULL << (PSParser::COPYPAGE - 192))
      | (1ULL << (PSParser::BANDDEVICE - 192))
      | (1ULL << (PSParser::FRAMEDEVICE - 192))
      | (1ULL << (PSParser::RENDERBANDS - 192))
      | (1ULL << (PSParser::DEFINEFONT - 192))
      | (1ULL << (PSParser::FINDFONT - 192))
      | (1ULL << (PSParser::SCALEFONT - 192))
      | (1ULL << (PSParser::MAKEFONT - 192))
      | (1ULL << (PSParser::SETFONT - 192))
      | (1ULL << (PSParser::CURRENTFONT - 192))
      | (1ULL << (PSParser::SHOW - 192))
      | (1ULL << (PSParser::ASHOW - 192))
      | (1ULL << (PSParser::WIDTHSHOW - 192))
      | (1ULL << (PSParser::AWIDTHSHOW - 192))
      | (1ULL << (PSParser::KSHOW - 192))
      | (1ULL << (PSParser::STRINGWIDTH - 192))
      | (1ULL << (PSParser::FONTDIRECTORY - 192))
      | (1ULL << (PSParser::STANDARDENCODING - 192))
      | (1ULL << (PSParser::CACHESTATUS - 192))
      | (1ULL << (PSParser::SETCACHEDEVICE - 192))
      | (1ULL << (PSParser::SETCHARWIDTH - 192))
      | (1ULL << (PSParser::SETCACHELIMIT - 192))
      | (1ULL << (PSParser::WHERE - 192))
      | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
      | (1ULL << (PSParser::DEFINEDSTRING - 192))
      | (1ULL << (PSParser::NUMBER - 192))
      | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
      setState(12);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(10);
        block();
        break;
      }

      case 2: {
        setState(11);
        definitions();
        break;
      }

      }
      setState(16);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionsContext ------------------------------------------------------------------

PSParser::DefinitionsContext::DefinitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PSParser::DefinitionsContext::PRODECUREDEFNAME() {
  return getToken(PSParser::PRODECUREDEFNAME, 0);
}

tree::TerminalNode* PSParser::DefinitionsContext::DEF() {
  return getToken(PSParser::DEF, 0);
}

std::vector<PSParser::BlockContext *> PSParser::DefinitionsContext::block() {
  return getRuleContexts<PSParser::BlockContext>();
}

PSParser::BlockContext* PSParser::DefinitionsContext::block(size_t i) {
  return getRuleContext<PSParser::BlockContext>(i);
}

std::vector<PSParser::OperationsContext *> PSParser::DefinitionsContext::operations() {
  return getRuleContexts<PSParser::OperationsContext>();
}

PSParser::OperationsContext* PSParser::DefinitionsContext::operations(size_t i) {
  return getRuleContext<PSParser::OperationsContext>(i);
}

tree::TerminalNode* PSParser::DefinitionsContext::DEFINEDSTRING() {
  return getToken(PSParser::DEFINEDSTRING, 0);
}

tree::TerminalNode* PSParser::DefinitionsContext::NUMBER() {
  return getToken(PSParser::NUMBER, 0);
}


size_t PSParser::DefinitionsContext::getRuleIndex() const {
  return PSParser::RuleDefinitions;
}

antlrcpp::Any PSParser::DefinitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PSVisitor*>(visitor))
    return parserVisitor->visitDefinitions(this);
  else
    return visitor->visitChildren(this);
}

PSParser::DefinitionsContext* PSParser::definitions() {
  DefinitionsContext *_localctx = _tracker.createInstance<DefinitionsContext>(_ctx, getState());
  enterRule(_localctx, 2, PSParser::RuleDefinitions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(17);
      match(PSParser::PRODECUREDEFNAME);
      setState(18);
      match(PSParser::T__0);
      setState(22);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::T__0)
        | (1ULL << PSParser::T__2)
        | (1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192))
        | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
        | (1ULL << (PSParser::DEFINEDSTRING - 192))
        | (1ULL << (PSParser::NUMBER - 192))
        | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
        setState(19);
        block();
        setState(24);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(25);
      match(PSParser::T__1);
      setState(26);
      match(PSParser::DEF);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(27);
      match(PSParser::PRODECUREDEFNAME);
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::T__0)
        | (1ULL << PSParser::T__2)
        | (1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192))
        | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
        | (1ULL << (PSParser::DEFINEDSTRING - 192))
        | (1ULL << (PSParser::NUMBER - 192))
        | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
        setState(28);
        block();
        setState(33);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(34);
      match(PSParser::DEF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(35);
      match(PSParser::PRODECUREDEFNAME);
      setState(37);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192)))) != 0)) {
        setState(36);
        operations();
      }
      setState(39);
      match(PSParser::T__0);
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::T__0)
        | (1ULL << PSParser::T__2)
        | (1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192))
        | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
        | (1ULL << (PSParser::DEFINEDSTRING - 192))
        | (1ULL << (PSParser::NUMBER - 192))
        | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
        setState(40);
        block();
        setState(45);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(46);
      match(PSParser::T__1);
      setState(47);
      match(PSParser::T__0);
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::T__0)
        | (1ULL << PSParser::T__2)
        | (1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192))
        | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
        | (1ULL << (PSParser::DEFINEDSTRING - 192))
        | (1ULL << (PSParser::NUMBER - 192))
        | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
        setState(48);
        block();
        setState(53);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(54);
      match(PSParser::T__1);
      setState(55);
      operations();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(56);
      match(PSParser::PRODECUREDEFNAME);
      setState(57);
      match(PSParser::DEFINEDSTRING);
      setState(58);
      match(PSParser::DEF);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(59);
      match(PSParser::T__0);
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::T__0)
        | (1ULL << PSParser::T__2)
        | (1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192))
        | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
        | (1ULL << (PSParser::DEFINEDSTRING - 192))
        | (1ULL << (PSParser::NUMBER - 192))
        | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
        setState(60);
        block();
        setState(65);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(66);
      match(PSParser::T__1);
      setState(75);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PSParser::T__0) {
        setState(67);
        match(PSParser::T__0);
        setState(71);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << PSParser::T__0)
          | (1ULL << PSParser::T__2)
          | (1ULL << PSParser::IFELSE)
          | (1ULL << PSParser::IF)
          | (1ULL << PSParser::LOOP)
          | (1ULL << PSParser::REPEAT)
          | (1ULL << PSParser::START)
          | (1ULL << PSParser::EXEC)
          | (1ULL << PSParser::QUIT)
          | (1ULL << PSParser::FOR)
          | (1ULL << PSParser::FORALL)
          | (1ULL << PSParser::STOP)
          | (1ULL << PSParser::STOPPED)
          | (1ULL << PSParser::POP)
          | (1ULL << PSParser::EXCH)
          | (1ULL << PSParser::DUP)
          | (1ULL << PSParser::COPY)
          | (1ULL << PSParser::INDEX)
          | (1ULL << PSParser::ROLL)
          | (1ULL << PSParser::CLEAR)
          | (1ULL << PSParser::COUNT)
          | (1ULL << PSParser::MARK)
          | (1ULL << PSParser::CLEARTOMARK)
          | (1ULL << PSParser::COUNTTOMARK)
          | (1ULL << PSParser::ADD)
          | (1ULL << PSParser::DIV)
          | (1ULL << PSParser::IDIV)
          | (1ULL << PSParser::MOD)
          | (1ULL << PSParser::MUL)
          | (1ULL << PSParser::SUB)
          | (1ULL << PSParser::ABS)
          | (1ULL << PSParser::NEG)
          | (1ULL << PSParser::CEILING)
          | (1ULL << PSParser::FLOOR)
          | (1ULL << PSParser::ROUND)
          | (1ULL << PSParser::TRUNCATE)
          | (1ULL << PSParser::SQRT)
          | (1ULL << PSParser::ATAN)
          | (1ULL << PSParser::COS)
          | (1ULL << PSParser::SIN)
          | (1ULL << PSParser::EXP)
          | (1ULL << PSParser::LN)
          | (1ULL << PSParser::LOG)
          | (1ULL << PSParser::RAND)
          | (1ULL << PSParser::SRAND)
          | (1ULL << PSParser::RRAND)
          | (1ULL << PSParser::ARRAY)
          | (1ULL << PSParser::LENGTH)
          | (1ULL << PSParser::GET)
          | (1ULL << PSParser::PUT)
          | (1ULL << PSParser::GETINTERVAL)
          | (1ULL << PSParser::PUTINTERVAL)
          | (1ULL << PSParser::ALOAD)
          | (1ULL << PSParser::ASTORE)
          | (1ULL << PSParser::DICT)
          | (1ULL << PSParser::MAXLENGTH)
          | (1ULL << PSParser::BEGIN)
          | (1ULL << PSParser::END)
          | (1ULL << PSParser::LOAD)
          | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
          | (1ULL << (PSParser::ERRORDICT - 64))
          | (1ULL << (PSParser::SYSTEMDICT - 64))
          | (1ULL << (PSParser::USERDICT - 64))
          | (1ULL << (PSParser::CURRENTDICT - 64))
          | (1ULL << (PSParser::COUNTDICTSTACK - 64))
          | (1ULL << (PSParser::DICTSTACK - 64))
          | (1ULL << (PSParser::STRING - 64))
          | (1ULL << (PSParser::ANCHORSEARCH - 64))
          | (1ULL << (PSParser::SEARCH - 64))
          | (1ULL << (PSParser::TOKEN - 64))
          | (1ULL << (PSParser::EQ - 64))
          | (1ULL << (PSParser::NE - 64))
          | (1ULL << (PSParser::GE - 64))
          | (1ULL << (PSParser::GT - 64))
          | (1ULL << (PSParser::LE - 64))
          | (1ULL << (PSParser::LT - 64))
          | (1ULL << (PSParser::AND - 64))
          | (1ULL << (PSParser::NOT - 64))
          | (1ULL << (PSParser::OR - 64))
          | (1ULL << (PSParser::XOR - 64))
          | (1ULL << (PSParser::TRUE - 64))
          | (1ULL << (PSParser::FALSE - 64))
          | (1ULL << (PSParser::BITSHIFT - 64))
          | (1ULL << (PSParser::EXIT - 64))
          | (1ULL << (PSParser::COUNTEXECSTACK - 64))
          | (1ULL << (PSParser::EXECSTACK - 64))
          | (1ULL << (PSParser::TYPE - 64))
          | (1ULL << (PSParser::CVLIT - 64))
          | (1ULL << (PSParser::CVX - 64))
          | (1ULL << (PSParser::XCHECK - 64))
          | (1ULL << (PSParser::EXECUTEONLY - 64))
          | (1ULL << (PSParser::NOACCESS - 64))
          | (1ULL << (PSParser::READONLY - 64))
          | (1ULL << (PSParser::RCHECK - 64))
          | (1ULL << (PSParser::WCKECK - 64))
          | (1ULL << (PSParser::CVI - 64))
          | (1ULL << (PSParser::CVN - 64))
          | (1ULL << (PSParser::CVR - 64))
          | (1ULL << (PSParser::CVRS - 64))
          | (1ULL << (PSParser::CVS - 64))
          | (1ULL << (PSParser::FILE - 64))
          | (1ULL << (PSParser::CLOSEFILE - 64))
          | (1ULL << (PSParser::READ - 64))
          | (1ULL << (PSParser::WRITE - 64))
          | (1ULL << (PSParser::READHEXSTRING - 64))
          | (1ULL << (PSParser::WRITEHEXSTRING - 64))
          | (1ULL << (PSParser::READSTRING - 64))
          | (1ULL << (PSParser::WRITESTRING - 64))
          | (1ULL << (PSParser::READLINE - 64))
          | (1ULL << (PSParser::BYTESAVAILABLE - 64))
          | (1ULL << (PSParser::FLUSH - 64))
          | (1ULL << (PSParser::FLUSHFILE - 64))
          | (1ULL << (PSParser::RESETFILE - 64))
          | (1ULL << (PSParser::STATUS - 64))
          | (1ULL << (PSParser::RUN - 64))
          | (1ULL << (PSParser::CURRENTFILE - 64))
          | (1ULL << (PSParser::PRINT - 64))
          | (1ULL << (PSParser::POP_OBJECT - 64))
          | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
          | (1ULL << (PSParser::STACK - 64))
          | (1ULL << (PSParser::PSTACK - 64))
          | (1ULL << (PSParser::PROMPT - 64))
          | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
          | (1ULL << (PSParser::RESTORE - 128))
          | (1ULL << (PSParser::VMSTATUS - 128))
          | (1ULL << (PSParser::BIND - 128))
          | (1ULL << (PSParser::USERTIME - 128))
          | (1ULL << (PSParser::VERSION - 128))
          | (1ULL << (PSParser::GSAVE - 128))
          | (1ULL << (PSParser::GRESTORE - 128))
          | (1ULL << (PSParser::GRESTOREALL - 128))
          | (1ULL << (PSParser::INITGRAPHICS - 128))
          | (1ULL << (PSParser::SETLINEWIDTH - 128))
          | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
          | (1ULL << (PSParser::SETLINECAP - 128))
          | (1ULL << (PSParser::CURRENTLINECAP - 128))
          | (1ULL << (PSParser::SETLINEJOIN - 128))
          | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
          | (1ULL << (PSParser::SETMITERLIMIT - 128))
          | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
          | (1ULL << (PSParser::SETDASH - 128))
          | (1ULL << (PSParser::CURRENTDASH - 128))
          | (1ULL << (PSParser::SETFLAT - 128))
          | (1ULL << (PSParser::CURRENTFLAT - 128))
          | (1ULL << (PSParser::SETGRAY - 128))
          | (1ULL << (PSParser::SETHSBCOLOR - 128))
          | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
          | (1ULL << (PSParser::SETRGBCOLOR - 128))
          | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
          | (1ULL << (PSParser::SETSCREEN - 128))
          | (1ULL << (PSParser::CURRENTSCREEN - 128))
          | (1ULL << (PSParser::SETTRANSFER - 128))
          | (1ULL << (PSParser::CURRENTTRANSFER - 128))
          | (1ULL << (PSParser::MATRIX - 128))
          | (1ULL << (PSParser::CURRENTMATRIX - 128))
          | (1ULL << (PSParser::WCHECK - 128))
          | (1ULL << (PSParser::CVL - 128))
          | (1ULL << (PSParser::CXV - 128))
          | (1ULL << (PSParser::CVLLT - 128))
          | (1ULL << (PSParser::CURRENTGRAY - 128))
          | (1ULL << (PSParser::INITMATRIX - 128))
          | (1ULL << (PSParser::IDENTMATRIX - 128))
          | (1ULL << (PSParser::DEFAULTMATRIX - 128))
          | (1ULL << (PSParser::SETMATRIX - 128))
          | (1ULL << (PSParser::TRANSLATE - 128))
          | (1ULL << (PSParser::SCALE - 128))
          | (1ULL << (PSParser::ROTATE - 128))
          | (1ULL << (PSParser::CONCAT - 128))
          | (1ULL << (PSParser::CONCATMATRIX - 128))
          | (1ULL << (PSParser::TRANSFORM - 128))
          | (1ULL << (PSParser::DTRANSFORM - 128))
          | (1ULL << (PSParser::ITRANSFORM - 128))
          | (1ULL << (PSParser::IDTRANSFORM - 128))
          | (1ULL << (PSParser::INVERTMATRIX - 128))
          | (1ULL << (PSParser::NEWPATH - 128))
          | (1ULL << (PSParser::CURRENTPOINT - 128))
          | (1ULL << (PSParser::MOVETO - 128))
          | (1ULL << (PSParser::RMOVETO - 128))
          | (1ULL << (PSParser::LINETO - 128))
          | (1ULL << (PSParser::RLINETO - 128))
          | (1ULL << (PSParser::ARC - 128))
          | (1ULL << (PSParser::ARCN - 128))
          | (1ULL << (PSParser::ARCTO - 128))
          | (1ULL << (PSParser::CURVETO - 128))
          | (1ULL << (PSParser::RCURVETO - 128))
          | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
          | (1ULL << (PSParser::REVERSEPATH - 192))
          | (1ULL << (PSParser::STROKEPATH - 192))
          | (1ULL << (PSParser::CHARPATH - 192))
          | (1ULL << (PSParser::CLIPPATH - 192))
          | (1ULL << (PSParser::PATHBBOX - 192))
          | (1ULL << (PSParser::PATHFORALL - 192))
          | (1ULL << (PSParser::INITCLIP - 192))
          | (1ULL << (PSParser::CLIP - 192))
          | (1ULL << (PSParser::EOCLIP - 192))
          | (1ULL << (PSParser::ERASEPAGE - 192))
          | (1ULL << (PSParser::FILL - 192))
          | (1ULL << (PSParser::EOFILL - 192))
          | (1ULL << (PSParser::STROKE - 192))
          | (1ULL << (PSParser::IMAGE - 192))
          | (1ULL << (PSParser::IMAGEMASK - 192))
          | (1ULL << (PSParser::SHOWPAGE - 192))
          | (1ULL << (PSParser::COPYPAGE - 192))
          | (1ULL << (PSParser::BANDDEVICE - 192))
          | (1ULL << (PSParser::FRAMEDEVICE - 192))
          | (1ULL << (PSParser::RENDERBANDS - 192))
          | (1ULL << (PSParser::DEFINEFONT - 192))
          | (1ULL << (PSParser::FINDFONT - 192))
          | (1ULL << (PSParser::SCALEFONT - 192))
          | (1ULL << (PSParser::MAKEFONT - 192))
          | (1ULL << (PSParser::SETFONT - 192))
          | (1ULL << (PSParser::CURRENTFONT - 192))
          | (1ULL << (PSParser::SHOW - 192))
          | (1ULL << (PSParser::ASHOW - 192))
          | (1ULL << (PSParser::WIDTHSHOW - 192))
          | (1ULL << (PSParser::AWIDTHSHOW - 192))
          | (1ULL << (PSParser::KSHOW - 192))
          | (1ULL << (PSParser::STRINGWIDTH - 192))
          | (1ULL << (PSParser::FONTDIRECTORY - 192))
          | (1ULL << (PSParser::STANDARDENCODING - 192))
          | (1ULL << (PSParser::CACHESTATUS - 192))
          | (1ULL << (PSParser::SETCACHEDEVICE - 192))
          | (1ULL << (PSParser::SETCHARWIDTH - 192))
          | (1ULL << (PSParser::SETCACHELIMIT - 192))
          | (1ULL << (PSParser::WHERE - 192))
          | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
          | (1ULL << (PSParser::DEFINEDSTRING - 192))
          | (1ULL << (PSParser::NUMBER - 192))
          | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
          setState(68);
          block();
          setState(73);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(74);
        match(PSParser::T__1);
      }
      setState(77);
      operations();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(78);
      match(PSParser::T__0);
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PSParser::T__0)
        | (1ULL << PSParser::T__2)
        | (1ULL << PSParser::IFELSE)
        | (1ULL << PSParser::IF)
        | (1ULL << PSParser::LOOP)
        | (1ULL << PSParser::REPEAT)
        | (1ULL << PSParser::START)
        | (1ULL << PSParser::EXEC)
        | (1ULL << PSParser::QUIT)
        | (1ULL << PSParser::FOR)
        | (1ULL << PSParser::FORALL)
        | (1ULL << PSParser::STOP)
        | (1ULL << PSParser::STOPPED)
        | (1ULL << PSParser::POP)
        | (1ULL << PSParser::EXCH)
        | (1ULL << PSParser::DUP)
        | (1ULL << PSParser::COPY)
        | (1ULL << PSParser::INDEX)
        | (1ULL << PSParser::ROLL)
        | (1ULL << PSParser::CLEAR)
        | (1ULL << PSParser::COUNT)
        | (1ULL << PSParser::MARK)
        | (1ULL << PSParser::CLEARTOMARK)
        | (1ULL << PSParser::COUNTTOMARK)
        | (1ULL << PSParser::ADD)
        | (1ULL << PSParser::DIV)
        | (1ULL << PSParser::IDIV)
        | (1ULL << PSParser::MOD)
        | (1ULL << PSParser::MUL)
        | (1ULL << PSParser::SUB)
        | (1ULL << PSParser::ABS)
        | (1ULL << PSParser::NEG)
        | (1ULL << PSParser::CEILING)
        | (1ULL << PSParser::FLOOR)
        | (1ULL << PSParser::ROUND)
        | (1ULL << PSParser::TRUNCATE)
        | (1ULL << PSParser::SQRT)
        | (1ULL << PSParser::ATAN)
        | (1ULL << PSParser::COS)
        | (1ULL << PSParser::SIN)
        | (1ULL << PSParser::EXP)
        | (1ULL << PSParser::LN)
        | (1ULL << PSParser::LOG)
        | (1ULL << PSParser::RAND)
        | (1ULL << PSParser::SRAND)
        | (1ULL << PSParser::RRAND)
        | (1ULL << PSParser::ARRAY)
        | (1ULL << PSParser::LENGTH)
        | (1ULL << PSParser::GET)
        | (1ULL << PSParser::PUT)
        | (1ULL << PSParser::GETINTERVAL)
        | (1ULL << PSParser::PUTINTERVAL)
        | (1ULL << PSParser::ALOAD)
        | (1ULL << PSParser::ASTORE)
        | (1ULL << PSParser::DICT)
        | (1ULL << PSParser::MAXLENGTH)
        | (1ULL << PSParser::BEGIN)
        | (1ULL << PSParser::END)
        | (1ULL << PSParser::LOAD)
        | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
        | (1ULL << (PSParser::ERRORDICT - 64))
        | (1ULL << (PSParser::SYSTEMDICT - 64))
        | (1ULL << (PSParser::USERDICT - 64))
        | (1ULL << (PSParser::CURRENTDICT - 64))
        | (1ULL << (PSParser::COUNTDICTSTACK - 64))
        | (1ULL << (PSParser::DICTSTACK - 64))
        | (1ULL << (PSParser::STRING - 64))
        | (1ULL << (PSParser::ANCHORSEARCH - 64))
        | (1ULL << (PSParser::SEARCH - 64))
        | (1ULL << (PSParser::TOKEN - 64))
        | (1ULL << (PSParser::EQ - 64))
        | (1ULL << (PSParser::NE - 64))
        | (1ULL << (PSParser::GE - 64))
        | (1ULL << (PSParser::GT - 64))
        | (1ULL << (PSParser::LE - 64))
        | (1ULL << (PSParser::LT - 64))
        | (1ULL << (PSParser::AND - 64))
        | (1ULL << (PSParser::NOT - 64))
        | (1ULL << (PSParser::OR - 64))
        | (1ULL << (PSParser::XOR - 64))
        | (1ULL << (PSParser::TRUE - 64))
        | (1ULL << (PSParser::FALSE - 64))
        | (1ULL << (PSParser::BITSHIFT - 64))
        | (1ULL << (PSParser::EXIT - 64))
        | (1ULL << (PSParser::COUNTEXECSTACK - 64))
        | (1ULL << (PSParser::EXECSTACK - 64))
        | (1ULL << (PSParser::TYPE - 64))
        | (1ULL << (PSParser::CVLIT - 64))
        | (1ULL << (PSParser::CVX - 64))
        | (1ULL << (PSParser::XCHECK - 64))
        | (1ULL << (PSParser::EXECUTEONLY - 64))
        | (1ULL << (PSParser::NOACCESS - 64))
        | (1ULL << (PSParser::READONLY - 64))
        | (1ULL << (PSParser::RCHECK - 64))
        | (1ULL << (PSParser::WCKECK - 64))
        | (1ULL << (PSParser::CVI - 64))
        | (1ULL << (PSParser::CVN - 64))
        | (1ULL << (PSParser::CVR - 64))
        | (1ULL << (PSParser::CVRS - 64))
        | (1ULL << (PSParser::CVS - 64))
        | (1ULL << (PSParser::FILE - 64))
        | (1ULL << (PSParser::CLOSEFILE - 64))
        | (1ULL << (PSParser::READ - 64))
        | (1ULL << (PSParser::WRITE - 64))
        | (1ULL << (PSParser::READHEXSTRING - 64))
        | (1ULL << (PSParser::WRITEHEXSTRING - 64))
        | (1ULL << (PSParser::READSTRING - 64))
        | (1ULL << (PSParser::WRITESTRING - 64))
        | (1ULL << (PSParser::READLINE - 64))
        | (1ULL << (PSParser::BYTESAVAILABLE - 64))
        | (1ULL << (PSParser::FLUSH - 64))
        | (1ULL << (PSParser::FLUSHFILE - 64))
        | (1ULL << (PSParser::RESETFILE - 64))
        | (1ULL << (PSParser::STATUS - 64))
        | (1ULL << (PSParser::RUN - 64))
        | (1ULL << (PSParser::CURRENTFILE - 64))
        | (1ULL << (PSParser::PRINT - 64))
        | (1ULL << (PSParser::POP_OBJECT - 64))
        | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
        | (1ULL << (PSParser::STACK - 64))
        | (1ULL << (PSParser::PSTACK - 64))
        | (1ULL << (PSParser::PROMPT - 64))
        | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
        | (1ULL << (PSParser::RESTORE - 128))
        | (1ULL << (PSParser::VMSTATUS - 128))
        | (1ULL << (PSParser::BIND - 128))
        | (1ULL << (PSParser::USERTIME - 128))
        | (1ULL << (PSParser::VERSION - 128))
        | (1ULL << (PSParser::GSAVE - 128))
        | (1ULL << (PSParser::GRESTORE - 128))
        | (1ULL << (PSParser::GRESTOREALL - 128))
        | (1ULL << (PSParser::INITGRAPHICS - 128))
        | (1ULL << (PSParser::SETLINEWIDTH - 128))
        | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
        | (1ULL << (PSParser::SETLINECAP - 128))
        | (1ULL << (PSParser::CURRENTLINECAP - 128))
        | (1ULL << (PSParser::SETLINEJOIN - 128))
        | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
        | (1ULL << (PSParser::SETMITERLIMIT - 128))
        | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
        | (1ULL << (PSParser::SETDASH - 128))
        | (1ULL << (PSParser::CURRENTDASH - 128))
        | (1ULL << (PSParser::SETFLAT - 128))
        | (1ULL << (PSParser::CURRENTFLAT - 128))
        | (1ULL << (PSParser::SETGRAY - 128))
        | (1ULL << (PSParser::SETHSBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
        | (1ULL << (PSParser::SETRGBCOLOR - 128))
        | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
        | (1ULL << (PSParser::SETSCREEN - 128))
        | (1ULL << (PSParser::CURRENTSCREEN - 128))
        | (1ULL << (PSParser::SETTRANSFER - 128))
        | (1ULL << (PSParser::CURRENTTRANSFER - 128))
        | (1ULL << (PSParser::MATRIX - 128))
        | (1ULL << (PSParser::CURRENTMATRIX - 128))
        | (1ULL << (PSParser::WCHECK - 128))
        | (1ULL << (PSParser::CVL - 128))
        | (1ULL << (PSParser::CXV - 128))
        | (1ULL << (PSParser::CVLLT - 128))
        | (1ULL << (PSParser::CURRENTGRAY - 128))
        | (1ULL << (PSParser::INITMATRIX - 128))
        | (1ULL << (PSParser::IDENTMATRIX - 128))
        | (1ULL << (PSParser::DEFAULTMATRIX - 128))
        | (1ULL << (PSParser::SETMATRIX - 128))
        | (1ULL << (PSParser::TRANSLATE - 128))
        | (1ULL << (PSParser::SCALE - 128))
        | (1ULL << (PSParser::ROTATE - 128))
        | (1ULL << (PSParser::CONCAT - 128))
        | (1ULL << (PSParser::CONCATMATRIX - 128))
        | (1ULL << (PSParser::TRANSFORM - 128))
        | (1ULL << (PSParser::DTRANSFORM - 128))
        | (1ULL << (PSParser::ITRANSFORM - 128))
        | (1ULL << (PSParser::IDTRANSFORM - 128))
        | (1ULL << (PSParser::INVERTMATRIX - 128))
        | (1ULL << (PSParser::NEWPATH - 128))
        | (1ULL << (PSParser::CURRENTPOINT - 128))
        | (1ULL << (PSParser::MOVETO - 128))
        | (1ULL << (PSParser::RMOVETO - 128))
        | (1ULL << (PSParser::LINETO - 128))
        | (1ULL << (PSParser::RLINETO - 128))
        | (1ULL << (PSParser::ARC - 128))
        | (1ULL << (PSParser::ARCN - 128))
        | (1ULL << (PSParser::ARCTO - 128))
        | (1ULL << (PSParser::CURVETO - 128))
        | (1ULL << (PSParser::RCURVETO - 128))
        | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
        | (1ULL << (PSParser::REVERSEPATH - 192))
        | (1ULL << (PSParser::STROKEPATH - 192))
        | (1ULL << (PSParser::CHARPATH - 192))
        | (1ULL << (PSParser::CLIPPATH - 192))
        | (1ULL << (PSParser::PATHBBOX - 192))
        | (1ULL << (PSParser::PATHFORALL - 192))
        | (1ULL << (PSParser::INITCLIP - 192))
        | (1ULL << (PSParser::CLIP - 192))
        | (1ULL << (PSParser::EOCLIP - 192))
        | (1ULL << (PSParser::ERASEPAGE - 192))
        | (1ULL << (PSParser::FILL - 192))
        | (1ULL << (PSParser::EOFILL - 192))
        | (1ULL << (PSParser::STROKE - 192))
        | (1ULL << (PSParser::IMAGE - 192))
        | (1ULL << (PSParser::IMAGEMASK - 192))
        | (1ULL << (PSParser::SHOWPAGE - 192))
        | (1ULL << (PSParser::COPYPAGE - 192))
        | (1ULL << (PSParser::BANDDEVICE - 192))
        | (1ULL << (PSParser::FRAMEDEVICE - 192))
        | (1ULL << (PSParser::RENDERBANDS - 192))
        | (1ULL << (PSParser::DEFINEFONT - 192))
        | (1ULL << (PSParser::FINDFONT - 192))
        | (1ULL << (PSParser::SCALEFONT - 192))
        | (1ULL << (PSParser::MAKEFONT - 192))
        | (1ULL << (PSParser::SETFONT - 192))
        | (1ULL << (PSParser::CURRENTFONT - 192))
        | (1ULL << (PSParser::SHOW - 192))
        | (1ULL << (PSParser::ASHOW - 192))
        | (1ULL << (PSParser::WIDTHSHOW - 192))
        | (1ULL << (PSParser::AWIDTHSHOW - 192))
        | (1ULL << (PSParser::KSHOW - 192))
        | (1ULL << (PSParser::STRINGWIDTH - 192))
        | (1ULL << (PSParser::FONTDIRECTORY - 192))
        | (1ULL << (PSParser::STANDARDENCODING - 192))
        | (1ULL << (PSParser::CACHESTATUS - 192))
        | (1ULL << (PSParser::SETCACHEDEVICE - 192))
        | (1ULL << (PSParser::SETCHARWIDTH - 192))
        | (1ULL << (PSParser::SETCACHELIMIT - 192))
        | (1ULL << (PSParser::WHERE - 192))
        | (1ULL << (PSParser::PRODECUREDEFNAME - 192))
        | (1ULL << (PSParser::DEFINEDSTRING - 192))
        | (1ULL << (PSParser::NUMBER - 192))
        | (1ULL << (PSParser::STRINGS - 192)))) != 0)) {
        setState(79);
        block();
        setState(84);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(85);
      match(PSParser::T__1);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(86);
      match(PSParser::T__2);
      setState(87);
      block();
      setState(88);
      match(PSParser::T__3);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(90);
      match(PSParser::PRODECUREDEFNAME);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(91);
      match(PSParser::DEFINEDSTRING);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(92);
      match(PSParser::NUMBER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

PSParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PSParser::ProcedureContext::STRINGS() {
  return getToken(PSParser::STRINGS, 0);
}


size_t PSParser::ProcedureContext::getRuleIndex() const {
  return PSParser::RuleProcedure;
}

antlrcpp::Any PSParser::ProcedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PSVisitor*>(visitor))
    return parserVisitor->visitProcedure(this);
  else
    return visitor->visitChildren(this);
}

PSParser::ProcedureContext* PSParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 4, PSParser::RuleProcedure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(PSParser::STRINGS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PSParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PSParser::ProcedureContext *> PSParser::BlockContext::procedure() {
  return getRuleContexts<PSParser::ProcedureContext>();
}

PSParser::ProcedureContext* PSParser::BlockContext::procedure(size_t i) {
  return getRuleContext<PSParser::ProcedureContext>(i);
}

std::vector<PSParser::OperationsContext *> PSParser::BlockContext::operations() {
  return getRuleContexts<PSParser::OperationsContext>();
}

PSParser::OperationsContext* PSParser::BlockContext::operations(size_t i) {
  return getRuleContext<PSParser::OperationsContext>(i);
}

std::vector<PSParser::DefinitionsContext *> PSParser::BlockContext::definitions() {
  return getRuleContexts<PSParser::DefinitionsContext>();
}

PSParser::DefinitionsContext* PSParser::BlockContext::definitions(size_t i) {
  return getRuleContext<PSParser::DefinitionsContext>(i);
}


size_t PSParser::BlockContext::getRuleIndex() const {
  return PSParser::RuleBlock;
}

antlrcpp::Any PSParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PSVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PSParser::BlockContext* PSParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, PSParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(100); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(100);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case PSParser::STRINGS: {
                  setState(97);
                  procedure();
                  break;
                }

                case PSParser::IFELSE:
                case PSParser::IF:
                case PSParser::LOOP:
                case PSParser::REPEAT:
                case PSParser::START:
                case PSParser::EXEC:
                case PSParser::QUIT:
                case PSParser::FOR:
                case PSParser::FORALL:
                case PSParser::STOP:
                case PSParser::STOPPED:
                case PSParser::POP:
                case PSParser::EXCH:
                case PSParser::DUP:
                case PSParser::COPY:
                case PSParser::INDEX:
                case PSParser::ROLL:
                case PSParser::CLEAR:
                case PSParser::COUNT:
                case PSParser::MARK:
                case PSParser::CLEARTOMARK:
                case PSParser::COUNTTOMARK:
                case PSParser::ADD:
                case PSParser::DIV:
                case PSParser::IDIV:
                case PSParser::MOD:
                case PSParser::MUL:
                case PSParser::SUB:
                case PSParser::ABS:
                case PSParser::NEG:
                case PSParser::CEILING:
                case PSParser::FLOOR:
                case PSParser::ROUND:
                case PSParser::TRUNCATE:
                case PSParser::SQRT:
                case PSParser::ATAN:
                case PSParser::COS:
                case PSParser::SIN:
                case PSParser::EXP:
                case PSParser::LN:
                case PSParser::LOG:
                case PSParser::RAND:
                case PSParser::SRAND:
                case PSParser::RRAND:
                case PSParser::ARRAY:
                case PSParser::LENGTH:
                case PSParser::GET:
                case PSParser::PUT:
                case PSParser::GETINTERVAL:
                case PSParser::PUTINTERVAL:
                case PSParser::ALOAD:
                case PSParser::ASTORE:
                case PSParser::DICT:
                case PSParser::MAXLENGTH:
                case PSParser::BEGIN:
                case PSParser::END:
                case PSParser::LOAD:
                case PSParser::STORE:
                case PSParser::KNOWN:
                case PSParser::ERRORDICT:
                case PSParser::SYSTEMDICT:
                case PSParser::USERDICT:
                case PSParser::CURRENTDICT:
                case PSParser::COUNTDICTSTACK:
                case PSParser::DICTSTACK:
                case PSParser::STRING:
                case PSParser::ANCHORSEARCH:
                case PSParser::SEARCH:
                case PSParser::TOKEN:
                case PSParser::EQ:
                case PSParser::NE:
                case PSParser::GE:
                case PSParser::GT:
                case PSParser::LE:
                case PSParser::LT:
                case PSParser::AND:
                case PSParser::NOT:
                case PSParser::OR:
                case PSParser::XOR:
                case PSParser::TRUE:
                case PSParser::FALSE:
                case PSParser::BITSHIFT:
                case PSParser::EXIT:
                case PSParser::COUNTEXECSTACK:
                case PSParser::EXECSTACK:
                case PSParser::TYPE:
                case PSParser::CVLIT:
                case PSParser::CVX:
                case PSParser::XCHECK:
                case PSParser::EXECUTEONLY:
                case PSParser::NOACCESS:
                case PSParser::READONLY:
                case PSParser::RCHECK:
                case PSParser::WCKECK:
                case PSParser::CVI:
                case PSParser::CVN:
                case PSParser::CVR:
                case PSParser::CVRS:
                case PSParser::CVS:
                case PSParser::FILE:
                case PSParser::CLOSEFILE:
                case PSParser::READ:
                case PSParser::WRITE:
                case PSParser::READHEXSTRING:
                case PSParser::WRITEHEXSTRING:
                case PSParser::READSTRING:
                case PSParser::WRITESTRING:
                case PSParser::READLINE:
                case PSParser::BYTESAVAILABLE:
                case PSParser::FLUSH:
                case PSParser::FLUSHFILE:
                case PSParser::RESETFILE:
                case PSParser::STATUS:
                case PSParser::RUN:
                case PSParser::CURRENTFILE:
                case PSParser::PRINT:
                case PSParser::POP_OBJECT:
                case PSParser::POP_OBJECT_PROCEDURE:
                case PSParser::STACK:
                case PSParser::PSTACK:
                case PSParser::PROMPT:
                case PSParser::ECHO:
                case PSParser::SAVE:
                case PSParser::RESTORE:
                case PSParser::VMSTATUS:
                case PSParser::BIND:
                case PSParser::USERTIME:
                case PSParser::VERSION:
                case PSParser::GSAVE:
                case PSParser::GRESTORE:
                case PSParser::GRESTOREALL:
                case PSParser::INITGRAPHICS:
                case PSParser::SETLINEWIDTH:
                case PSParser::CURRENTLINEWIDTH:
                case PSParser::SETLINECAP:
                case PSParser::CURRENTLINECAP:
                case PSParser::SETLINEJOIN:
                case PSParser::CURRENTLINEJOIN:
                case PSParser::SETMITERLIMIT:
                case PSParser::CURRENTMITERLIMIT:
                case PSParser::SETDASH:
                case PSParser::CURRENTDASH:
                case PSParser::SETFLAT:
                case PSParser::CURRENTFLAT:
                case PSParser::SETGRAY:
                case PSParser::SETHSBCOLOR:
                case PSParser::CURRENTHSBCOLOR:
                case PSParser::SETRGBCOLOR:
                case PSParser::CURRENTRGBCOLOR:
                case PSParser::SETSCREEN:
                case PSParser::CURRENTSCREEN:
                case PSParser::SETTRANSFER:
                case PSParser::CURRENTTRANSFER:
                case PSParser::MATRIX:
                case PSParser::CURRENTMATRIX:
                case PSParser::WCHECK:
                case PSParser::CVL:
                case PSParser::CXV:
                case PSParser::CVLLT:
                case PSParser::CURRENTGRAY:
                case PSParser::INITMATRIX:
                case PSParser::IDENTMATRIX:
                case PSParser::DEFAULTMATRIX:
                case PSParser::SETMATRIX:
                case PSParser::TRANSLATE:
                case PSParser::SCALE:
                case PSParser::ROTATE:
                case PSParser::CONCAT:
                case PSParser::CONCATMATRIX:
                case PSParser::TRANSFORM:
                case PSParser::DTRANSFORM:
                case PSParser::ITRANSFORM:
                case PSParser::IDTRANSFORM:
                case PSParser::INVERTMATRIX:
                case PSParser::NEWPATH:
                case PSParser::CURRENTPOINT:
                case PSParser::MOVETO:
                case PSParser::RMOVETO:
                case PSParser::LINETO:
                case PSParser::RLINETO:
                case PSParser::ARC:
                case PSParser::ARCN:
                case PSParser::ARCTO:
                case PSParser::CURVETO:
                case PSParser::RCURVETO:
                case PSParser::CLOSEPATH:
                case PSParser::FLATTENPATH:
                case PSParser::REVERSEPATH:
                case PSParser::STROKEPATH:
                case PSParser::CHARPATH:
                case PSParser::CLIPPATH:
                case PSParser::PATHBBOX:
                case PSParser::PATHFORALL:
                case PSParser::INITCLIP:
                case PSParser::CLIP:
                case PSParser::EOCLIP:
                case PSParser::ERASEPAGE:
                case PSParser::FILL:
                case PSParser::EOFILL:
                case PSParser::STROKE:
                case PSParser::IMAGE:
                case PSParser::IMAGEMASK:
                case PSParser::SHOWPAGE:
                case PSParser::COPYPAGE:
                case PSParser::BANDDEVICE:
                case PSParser::FRAMEDEVICE:
                case PSParser::RENDERBANDS:
                case PSParser::DEFINEFONT:
                case PSParser::FINDFONT:
                case PSParser::SCALEFONT:
                case PSParser::MAKEFONT:
                case PSParser::SETFONT:
                case PSParser::CURRENTFONT:
                case PSParser::SHOW:
                case PSParser::ASHOW:
                case PSParser::WIDTHSHOW:
                case PSParser::AWIDTHSHOW:
                case PSParser::KSHOW:
                case PSParser::STRINGWIDTH:
                case PSParser::FONTDIRECTORY:
                case PSParser::STANDARDENCODING:
                case PSParser::CACHESTATUS:
                case PSParser::SETCACHEDEVICE:
                case PSParser::SETCHARWIDTH:
                case PSParser::SETCACHELIMIT:
                case PSParser::WHERE: {
                  setState(98);
                  operations();
                  break;
                }

                case PSParser::T__0:
                case PSParser::T__2:
                case PSParser::PRODECUREDEFNAME:
                case PSParser::DEFINEDSTRING:
                case PSParser::NUMBER: {
                  setState(99);
                  definitions();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(102); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationsContext ------------------------------------------------------------------

PSParser::OperationsContext::OperationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PSParser::OperationsContext::POP() {
  return getToken(PSParser::POP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IFELSE() {
  return getToken(PSParser::IFELSE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IF() {
  return getToken(PSParser::IF, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LOOP() {
  return getToken(PSParser::LOOP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::REPEAT() {
  return getToken(PSParser::REPEAT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EXEC() {
  return getToken(PSParser::EXEC, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STOP() {
  return getToken(PSParser::STOP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STOPPED() {
  return getToken(PSParser::STOPPED, 0);
}

tree::TerminalNode* PSParser::OperationsContext::START() {
  return getToken(PSParser::START, 0);
}

tree::TerminalNode* PSParser::OperationsContext::QUIT() {
  return getToken(PSParser::QUIT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FOR() {
  return getToken(PSParser::FOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FORALL() {
  return getToken(PSParser::FORALL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EXCH() {
  return getToken(PSParser::EXCH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DUP() {
  return getToken(PSParser::DUP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COPY() {
  return getToken(PSParser::COPY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::INDEX() {
  return getToken(PSParser::INDEX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ROLL() {
  return getToken(PSParser::ROLL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CLEAR() {
  return getToken(PSParser::CLEAR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COUNT() {
  return getToken(PSParser::COUNT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MARK() {
  return getToken(PSParser::MARK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CLEARTOMARK() {
  return getToken(PSParser::CLEARTOMARK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COUNTTOMARK() {
  return getToken(PSParser::COUNTTOMARK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ADD() {
  return getToken(PSParser::ADD, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DIV() {
  return getToken(PSParser::DIV, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IDIV() {
  return getToken(PSParser::IDIV, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MOD() {
  return getToken(PSParser::MOD, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MUL() {
  return getToken(PSParser::MUL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SUB() {
  return getToken(PSParser::SUB, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ABS() {
  return getToken(PSParser::ABS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::NEG() {
  return getToken(PSParser::NEG, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CEILING() {
  return getToken(PSParser::CEILING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FLOOR() {
  return getToken(PSParser::FLOOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ROUND() {
  return getToken(PSParser::ROUND, 0);
}

tree::TerminalNode* PSParser::OperationsContext::TRUNCATE() {
  return getToken(PSParser::TRUNCATE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SQRT() {
  return getToken(PSParser::SQRT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ATAN() {
  return getToken(PSParser::ATAN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COS() {
  return getToken(PSParser::COS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SIN() {
  return getToken(PSParser::SIN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EXP() {
  return getToken(PSParser::EXP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LN() {
  return getToken(PSParser::LN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LOG() {
  return getToken(PSParser::LOG, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RAND() {
  return getToken(PSParser::RAND, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SRAND() {
  return getToken(PSParser::SRAND, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RRAND() {
  return getToken(PSParser::RRAND, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ARRAY() {
  return getToken(PSParser::ARRAY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LENGTH() {
  return getToken(PSParser::LENGTH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GET() {
  return getToken(PSParser::GET, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PUT() {
  return getToken(PSParser::PUT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GETINTERVAL() {
  return getToken(PSParser::GETINTERVAL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PUTINTERVAL() {
  return getToken(PSParser::PUTINTERVAL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ALOAD() {
  return getToken(PSParser::ALOAD, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ASTORE() {
  return getToken(PSParser::ASTORE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DICT() {
  return getToken(PSParser::DICT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MAXLENGTH() {
  return getToken(PSParser::MAXLENGTH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::BEGIN() {
  return getToken(PSParser::BEGIN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::END() {
  return getToken(PSParser::END, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LOAD() {
  return getToken(PSParser::LOAD, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STORE() {
  return getToken(PSParser::STORE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::KNOWN() {
  return getToken(PSParser::KNOWN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ERRORDICT() {
  return getToken(PSParser::ERRORDICT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SYSTEMDICT() {
  return getToken(PSParser::SYSTEMDICT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::USERDICT() {
  return getToken(PSParser::USERDICT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTDICT() {
  return getToken(PSParser::CURRENTDICT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COUNTDICTSTACK() {
  return getToken(PSParser::COUNTDICTSTACK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DICTSTACK() {
  return getToken(PSParser::DICTSTACK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STRING() {
  return getToken(PSParser::STRING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ANCHORSEARCH() {
  return getToken(PSParser::ANCHORSEARCH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SEARCH() {
  return getToken(PSParser::SEARCH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::TOKEN() {
  return getToken(PSParser::TOKEN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EQ() {
  return getToken(PSParser::EQ, 0);
}

tree::TerminalNode* PSParser::OperationsContext::NE() {
  return getToken(PSParser::NE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GE() {
  return getToken(PSParser::GE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GT() {
  return getToken(PSParser::GT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LE() {
  return getToken(PSParser::LE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LT() {
  return getToken(PSParser::LT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::AND() {
  return getToken(PSParser::AND, 0);
}

tree::TerminalNode* PSParser::OperationsContext::NOT() {
  return getToken(PSParser::NOT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::OR() {
  return getToken(PSParser::OR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::XOR() {
  return getToken(PSParser::XOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::TRUE() {
  return getToken(PSParser::TRUE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FALSE() {
  return getToken(PSParser::FALSE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::BITSHIFT() {
  return getToken(PSParser::BITSHIFT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EXIT() {
  return getToken(PSParser::EXIT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COUNTEXECSTACK() {
  return getToken(PSParser::COUNTEXECSTACK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EXECSTACK() {
  return getToken(PSParser::EXECSTACK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::TYPE() {
  return getToken(PSParser::TYPE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVLIT() {
  return getToken(PSParser::CVLIT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVX() {
  return getToken(PSParser::CVX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::XCHECK() {
  return getToken(PSParser::XCHECK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EXECUTEONLY() {
  return getToken(PSParser::EXECUTEONLY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::NOACCESS() {
  return getToken(PSParser::NOACCESS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::READONLY() {
  return getToken(PSParser::READONLY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RCHECK() {
  return getToken(PSParser::RCHECK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WCKECK() {
  return getToken(PSParser::WCKECK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVI() {
  return getToken(PSParser::CVI, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVN() {
  return getToken(PSParser::CVN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVR() {
  return getToken(PSParser::CVR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVRS() {
  return getToken(PSParser::CVRS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVS() {
  return getToken(PSParser::CVS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FILE() {
  return getToken(PSParser::FILE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CLOSEFILE() {
  return getToken(PSParser::CLOSEFILE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::READ() {
  return getToken(PSParser::READ, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WRITE() {
  return getToken(PSParser::WRITE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::READHEXSTRING() {
  return getToken(PSParser::READHEXSTRING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WRITEHEXSTRING() {
  return getToken(PSParser::WRITEHEXSTRING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::READSTRING() {
  return getToken(PSParser::READSTRING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WRITESTRING() {
  return getToken(PSParser::WRITESTRING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::READLINE() {
  return getToken(PSParser::READLINE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::BYTESAVAILABLE() {
  return getToken(PSParser::BYTESAVAILABLE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FLUSH() {
  return getToken(PSParser::FLUSH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FLUSHFILE() {
  return getToken(PSParser::FLUSHFILE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RESETFILE() {
  return getToken(PSParser::RESETFILE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STATUS() {
  return getToken(PSParser::STATUS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RUN() {
  return getToken(PSParser::RUN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTFILE() {
  return getToken(PSParser::CURRENTFILE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PRINT() {
  return getToken(PSParser::PRINT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::POP_OBJECT() {
  return getToken(PSParser::POP_OBJECT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::POP_OBJECT_PROCEDURE() {
  return getToken(PSParser::POP_OBJECT_PROCEDURE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STACK() {
  return getToken(PSParser::STACK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PSTACK() {
  return getToken(PSParser::PSTACK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PROMPT() {
  return getToken(PSParser::PROMPT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ECHO() {
  return getToken(PSParser::ECHO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SAVE() {
  return getToken(PSParser::SAVE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RESTORE() {
  return getToken(PSParser::RESTORE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::VMSTATUS() {
  return getToken(PSParser::VMSTATUS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::BIND() {
  return getToken(PSParser::BIND, 0);
}

tree::TerminalNode* PSParser::OperationsContext::USERTIME() {
  return getToken(PSParser::USERTIME, 0);
}

tree::TerminalNode* PSParser::OperationsContext::VERSION() {
  return getToken(PSParser::VERSION, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GSAVE() {
  return getToken(PSParser::GSAVE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GRESTORE() {
  return getToken(PSParser::GRESTORE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::GRESTOREALL() {
  return getToken(PSParser::GRESTOREALL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::INITGRAPHICS() {
  return getToken(PSParser::INITGRAPHICS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETLINEWIDTH() {
  return getToken(PSParser::SETLINEWIDTH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTLINEWIDTH() {
  return getToken(PSParser::CURRENTLINEWIDTH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETLINECAP() {
  return getToken(PSParser::SETLINECAP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTLINECAP() {
  return getToken(PSParser::CURRENTLINECAP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETLINEJOIN() {
  return getToken(PSParser::SETLINEJOIN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTLINEJOIN() {
  return getToken(PSParser::CURRENTLINEJOIN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETMITERLIMIT() {
  return getToken(PSParser::SETMITERLIMIT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTMITERLIMIT() {
  return getToken(PSParser::CURRENTMITERLIMIT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETDASH() {
  return getToken(PSParser::SETDASH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTDASH() {
  return getToken(PSParser::CURRENTDASH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETFLAT() {
  return getToken(PSParser::SETFLAT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTFLAT() {
  return getToken(PSParser::CURRENTFLAT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETGRAY() {
  return getToken(PSParser::SETGRAY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETHSBCOLOR() {
  return getToken(PSParser::SETHSBCOLOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTHSBCOLOR() {
  return getToken(PSParser::CURRENTHSBCOLOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETRGBCOLOR() {
  return getToken(PSParser::SETRGBCOLOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTRGBCOLOR() {
  return getToken(PSParser::CURRENTRGBCOLOR, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETSCREEN() {
  return getToken(PSParser::SETSCREEN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTSCREEN() {
  return getToken(PSParser::CURRENTSCREEN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETTRANSFER() {
  return getToken(PSParser::SETTRANSFER, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTTRANSFER() {
  return getToken(PSParser::CURRENTTRANSFER, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MATRIX() {
  return getToken(PSParser::MATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTMATRIX() {
  return getToken(PSParser::CURRENTMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WCHECK() {
  return getToken(PSParser::WCHECK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVL() {
  return getToken(PSParser::CVL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CXV() {
  return getToken(PSParser::CXV, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CVLLT() {
  return getToken(PSParser::CVLLT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTGRAY() {
  return getToken(PSParser::CURRENTGRAY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::INITMATRIX() {
  return getToken(PSParser::INITMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IDENTMATRIX() {
  return getToken(PSParser::IDENTMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DEFAULTMATRIX() {
  return getToken(PSParser::DEFAULTMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETMATRIX() {
  return getToken(PSParser::SETMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::TRANSLATE() {
  return getToken(PSParser::TRANSLATE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SCALE() {
  return getToken(PSParser::SCALE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ROTATE() {
  return getToken(PSParser::ROTATE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CONCAT() {
  return getToken(PSParser::CONCAT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CONCATMATRIX() {
  return getToken(PSParser::CONCATMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::TRANSFORM() {
  return getToken(PSParser::TRANSFORM, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DTRANSFORM() {
  return getToken(PSParser::DTRANSFORM, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ITRANSFORM() {
  return getToken(PSParser::ITRANSFORM, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IDTRANSFORM() {
  return getToken(PSParser::IDTRANSFORM, 0);
}

tree::TerminalNode* PSParser::OperationsContext::INVERTMATRIX() {
  return getToken(PSParser::INVERTMATRIX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::NEWPATH() {
  return getToken(PSParser::NEWPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTPOINT() {
  return getToken(PSParser::CURRENTPOINT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MOVETO() {
  return getToken(PSParser::MOVETO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RMOVETO() {
  return getToken(PSParser::RMOVETO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::LINETO() {
  return getToken(PSParser::LINETO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RLINETO() {
  return getToken(PSParser::RLINETO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ARC() {
  return getToken(PSParser::ARC, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ARCN() {
  return getToken(PSParser::ARCN, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ARCTO() {
  return getToken(PSParser::ARCTO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURVETO() {
  return getToken(PSParser::CURVETO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RCURVETO() {
  return getToken(PSParser::RCURVETO, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CLOSEPATH() {
  return getToken(PSParser::CLOSEPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FLATTENPATH() {
  return getToken(PSParser::FLATTENPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::REVERSEPATH() {
  return getToken(PSParser::REVERSEPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STROKEPATH() {
  return getToken(PSParser::STROKEPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CHARPATH() {
  return getToken(PSParser::CHARPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CLIPPATH() {
  return getToken(PSParser::CLIPPATH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PATHBBOX() {
  return getToken(PSParser::PATHBBOX, 0);
}

tree::TerminalNode* PSParser::OperationsContext::PATHFORALL() {
  return getToken(PSParser::PATHFORALL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::INITCLIP() {
  return getToken(PSParser::INITCLIP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CLIP() {
  return getToken(PSParser::CLIP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EOCLIP() {
  return getToken(PSParser::EOCLIP, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ERASEPAGE() {
  return getToken(PSParser::ERASEPAGE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FILL() {
  return getToken(PSParser::FILL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::EOFILL() {
  return getToken(PSParser::EOFILL, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STROKE() {
  return getToken(PSParser::STROKE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IMAGE() {
  return getToken(PSParser::IMAGE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::IMAGEMASK() {
  return getToken(PSParser::IMAGEMASK, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SHOWPAGE() {
  return getToken(PSParser::SHOWPAGE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::COPYPAGE() {
  return getToken(PSParser::COPYPAGE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::BANDDEVICE() {
  return getToken(PSParser::BANDDEVICE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FRAMEDEVICE() {
  return getToken(PSParser::FRAMEDEVICE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::RENDERBANDS() {
  return getToken(PSParser::RENDERBANDS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::DEFINEFONT() {
  return getToken(PSParser::DEFINEFONT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FINDFONT() {
  return getToken(PSParser::FINDFONT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SCALEFONT() {
  return getToken(PSParser::SCALEFONT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::MAKEFONT() {
  return getToken(PSParser::MAKEFONT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETFONT() {
  return getToken(PSParser::SETFONT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CURRENTFONT() {
  return getToken(PSParser::CURRENTFONT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SHOW() {
  return getToken(PSParser::SHOW, 0);
}

tree::TerminalNode* PSParser::OperationsContext::ASHOW() {
  return getToken(PSParser::ASHOW, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WIDTHSHOW() {
  return getToken(PSParser::WIDTHSHOW, 0);
}

tree::TerminalNode* PSParser::OperationsContext::AWIDTHSHOW() {
  return getToken(PSParser::AWIDTHSHOW, 0);
}

tree::TerminalNode* PSParser::OperationsContext::KSHOW() {
  return getToken(PSParser::KSHOW, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STRINGWIDTH() {
  return getToken(PSParser::STRINGWIDTH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::FONTDIRECTORY() {
  return getToken(PSParser::FONTDIRECTORY, 0);
}

tree::TerminalNode* PSParser::OperationsContext::STANDARDENCODING() {
  return getToken(PSParser::STANDARDENCODING, 0);
}

tree::TerminalNode* PSParser::OperationsContext::CACHESTATUS() {
  return getToken(PSParser::CACHESTATUS, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETCACHEDEVICE() {
  return getToken(PSParser::SETCACHEDEVICE, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETCHARWIDTH() {
  return getToken(PSParser::SETCHARWIDTH, 0);
}

tree::TerminalNode* PSParser::OperationsContext::SETCACHELIMIT() {
  return getToken(PSParser::SETCACHELIMIT, 0);
}

tree::TerminalNode* PSParser::OperationsContext::WHERE() {
  return getToken(PSParser::WHERE, 0);
}


size_t PSParser::OperationsContext::getRuleIndex() const {
  return PSParser::RuleOperations;
}

antlrcpp::Any PSParser::OperationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PSVisitor*>(visitor))
    return parserVisitor->visitOperations(this);
  else
    return visitor->visitChildren(this);
}

PSParser::OperationsContext* PSParser::operations() {
  OperationsContext *_localctx = _tracker.createInstance<OperationsContext>(_ctx, getState());
  enterRule(_localctx, 8, PSParser::RuleOperations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PSParser::IFELSE)
      | (1ULL << PSParser::IF)
      | (1ULL << PSParser::LOOP)
      | (1ULL << PSParser::REPEAT)
      | (1ULL << PSParser::START)
      | (1ULL << PSParser::EXEC)
      | (1ULL << PSParser::QUIT)
      | (1ULL << PSParser::FOR)
      | (1ULL << PSParser::FORALL)
      | (1ULL << PSParser::STOP)
      | (1ULL << PSParser::STOPPED)
      | (1ULL << PSParser::POP)
      | (1ULL << PSParser::EXCH)
      | (1ULL << PSParser::DUP)
      | (1ULL << PSParser::COPY)
      | (1ULL << PSParser::INDEX)
      | (1ULL << PSParser::ROLL)
      | (1ULL << PSParser::CLEAR)
      | (1ULL << PSParser::COUNT)
      | (1ULL << PSParser::MARK)
      | (1ULL << PSParser::CLEARTOMARK)
      | (1ULL << PSParser::COUNTTOMARK)
      | (1ULL << PSParser::ADD)
      | (1ULL << PSParser::DIV)
      | (1ULL << PSParser::IDIV)
      | (1ULL << PSParser::MOD)
      | (1ULL << PSParser::MUL)
      | (1ULL << PSParser::SUB)
      | (1ULL << PSParser::ABS)
      | (1ULL << PSParser::NEG)
      | (1ULL << PSParser::CEILING)
      | (1ULL << PSParser::FLOOR)
      | (1ULL << PSParser::ROUND)
      | (1ULL << PSParser::TRUNCATE)
      | (1ULL << PSParser::SQRT)
      | (1ULL << PSParser::ATAN)
      | (1ULL << PSParser::COS)
      | (1ULL << PSParser::SIN)
      | (1ULL << PSParser::EXP)
      | (1ULL << PSParser::LN)
      | (1ULL << PSParser::LOG)
      | (1ULL << PSParser::RAND)
      | (1ULL << PSParser::SRAND)
      | (1ULL << PSParser::RRAND)
      | (1ULL << PSParser::ARRAY)
      | (1ULL << PSParser::LENGTH)
      | (1ULL << PSParser::GET)
      | (1ULL << PSParser::PUT)
      | (1ULL << PSParser::GETINTERVAL)
      | (1ULL << PSParser::PUTINTERVAL)
      | (1ULL << PSParser::ALOAD)
      | (1ULL << PSParser::ASTORE)
      | (1ULL << PSParser::DICT)
      | (1ULL << PSParser::MAXLENGTH)
      | (1ULL << PSParser::BEGIN)
      | (1ULL << PSParser::END)
      | (1ULL << PSParser::LOAD)
      | (1ULL << PSParser::STORE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (PSParser::KNOWN - 64))
      | (1ULL << (PSParser::ERRORDICT - 64))
      | (1ULL << (PSParser::SYSTEMDICT - 64))
      | (1ULL << (PSParser::USERDICT - 64))
      | (1ULL << (PSParser::CURRENTDICT - 64))
      | (1ULL << (PSParser::COUNTDICTSTACK - 64))
      | (1ULL << (PSParser::DICTSTACK - 64))
      | (1ULL << (PSParser::STRING - 64))
      | (1ULL << (PSParser::ANCHORSEARCH - 64))
      | (1ULL << (PSParser::SEARCH - 64))
      | (1ULL << (PSParser::TOKEN - 64))
      | (1ULL << (PSParser::EQ - 64))
      | (1ULL << (PSParser::NE - 64))
      | (1ULL << (PSParser::GE - 64))
      | (1ULL << (PSParser::GT - 64))
      | (1ULL << (PSParser::LE - 64))
      | (1ULL << (PSParser::LT - 64))
      | (1ULL << (PSParser::AND - 64))
      | (1ULL << (PSParser::NOT - 64))
      | (1ULL << (PSParser::OR - 64))
      | (1ULL << (PSParser::XOR - 64))
      | (1ULL << (PSParser::TRUE - 64))
      | (1ULL << (PSParser::FALSE - 64))
      | (1ULL << (PSParser::BITSHIFT - 64))
      | (1ULL << (PSParser::EXIT - 64))
      | (1ULL << (PSParser::COUNTEXECSTACK - 64))
      | (1ULL << (PSParser::EXECSTACK - 64))
      | (1ULL << (PSParser::TYPE - 64))
      | (1ULL << (PSParser::CVLIT - 64))
      | (1ULL << (PSParser::CVX - 64))
      | (1ULL << (PSParser::XCHECK - 64))
      | (1ULL << (PSParser::EXECUTEONLY - 64))
      | (1ULL << (PSParser::NOACCESS - 64))
      | (1ULL << (PSParser::READONLY - 64))
      | (1ULL << (PSParser::RCHECK - 64))
      | (1ULL << (PSParser::WCKECK - 64))
      | (1ULL << (PSParser::CVI - 64))
      | (1ULL << (PSParser::CVN - 64))
      | (1ULL << (PSParser::CVR - 64))
      | (1ULL << (PSParser::CVRS - 64))
      | (1ULL << (PSParser::CVS - 64))
      | (1ULL << (PSParser::FILE - 64))
      | (1ULL << (PSParser::CLOSEFILE - 64))
      | (1ULL << (PSParser::READ - 64))
      | (1ULL << (PSParser::WRITE - 64))
      | (1ULL << (PSParser::READHEXSTRING - 64))
      | (1ULL << (PSParser::WRITEHEXSTRING - 64))
      | (1ULL << (PSParser::READSTRING - 64))
      | (1ULL << (PSParser::WRITESTRING - 64))
      | (1ULL << (PSParser::READLINE - 64))
      | (1ULL << (PSParser::BYTESAVAILABLE - 64))
      | (1ULL << (PSParser::FLUSH - 64))
      | (1ULL << (PSParser::FLUSHFILE - 64))
      | (1ULL << (PSParser::RESETFILE - 64))
      | (1ULL << (PSParser::STATUS - 64))
      | (1ULL << (PSParser::RUN - 64))
      | (1ULL << (PSParser::CURRENTFILE - 64))
      | (1ULL << (PSParser::PRINT - 64))
      | (1ULL << (PSParser::POP_OBJECT - 64))
      | (1ULL << (PSParser::POP_OBJECT_PROCEDURE - 64))
      | (1ULL << (PSParser::STACK - 64))
      | (1ULL << (PSParser::PSTACK - 64))
      | (1ULL << (PSParser::PROMPT - 64))
      | (1ULL << (PSParser::ECHO - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (PSParser::SAVE - 128))
      | (1ULL << (PSParser::RESTORE - 128))
      | (1ULL << (PSParser::VMSTATUS - 128))
      | (1ULL << (PSParser::BIND - 128))
      | (1ULL << (PSParser::USERTIME - 128))
      | (1ULL << (PSParser::VERSION - 128))
      | (1ULL << (PSParser::GSAVE - 128))
      | (1ULL << (PSParser::GRESTORE - 128))
      | (1ULL << (PSParser::GRESTOREALL - 128))
      | (1ULL << (PSParser::INITGRAPHICS - 128))
      | (1ULL << (PSParser::SETLINEWIDTH - 128))
      | (1ULL << (PSParser::CURRENTLINEWIDTH - 128))
      | (1ULL << (PSParser::SETLINECAP - 128))
      | (1ULL << (PSParser::CURRENTLINECAP - 128))
      | (1ULL << (PSParser::SETLINEJOIN - 128))
      | (1ULL << (PSParser::CURRENTLINEJOIN - 128))
      | (1ULL << (PSParser::SETMITERLIMIT - 128))
      | (1ULL << (PSParser::CURRENTMITERLIMIT - 128))
      | (1ULL << (PSParser::SETDASH - 128))
      | (1ULL << (PSParser::CURRENTDASH - 128))
      | (1ULL << (PSParser::SETFLAT - 128))
      | (1ULL << (PSParser::CURRENTFLAT - 128))
      | (1ULL << (PSParser::SETGRAY - 128))
      | (1ULL << (PSParser::SETHSBCOLOR - 128))
      | (1ULL << (PSParser::CURRENTHSBCOLOR - 128))
      | (1ULL << (PSParser::SETRGBCOLOR - 128))
      | (1ULL << (PSParser::CURRENTRGBCOLOR - 128))
      | (1ULL << (PSParser::SETSCREEN - 128))
      | (1ULL << (PSParser::CURRENTSCREEN - 128))
      | (1ULL << (PSParser::SETTRANSFER - 128))
      | (1ULL << (PSParser::CURRENTTRANSFER - 128))
      | (1ULL << (PSParser::MATRIX - 128))
      | (1ULL << (PSParser::CURRENTMATRIX - 128))
      | (1ULL << (PSParser::WCHECK - 128))
      | (1ULL << (PSParser::CVL - 128))
      | (1ULL << (PSParser::CXV - 128))
      | (1ULL << (PSParser::CVLLT - 128))
      | (1ULL << (PSParser::CURRENTGRAY - 128))
      | (1ULL << (PSParser::INITMATRIX - 128))
      | (1ULL << (PSParser::IDENTMATRIX - 128))
      | (1ULL << (PSParser::DEFAULTMATRIX - 128))
      | (1ULL << (PSParser::SETMATRIX - 128))
      | (1ULL << (PSParser::TRANSLATE - 128))
      | (1ULL << (PSParser::SCALE - 128))
      | (1ULL << (PSParser::ROTATE - 128))
      | (1ULL << (PSParser::CONCAT - 128))
      | (1ULL << (PSParser::CONCATMATRIX - 128))
      | (1ULL << (PSParser::TRANSFORM - 128))
      | (1ULL << (PSParser::DTRANSFORM - 128))
      | (1ULL << (PSParser::ITRANSFORM - 128))
      | (1ULL << (PSParser::IDTRANSFORM - 128))
      | (1ULL << (PSParser::INVERTMATRIX - 128))
      | (1ULL << (PSParser::NEWPATH - 128))
      | (1ULL << (PSParser::CURRENTPOINT - 128))
      | (1ULL << (PSParser::MOVETO - 128))
      | (1ULL << (PSParser::RMOVETO - 128))
      | (1ULL << (PSParser::LINETO - 128))
      | (1ULL << (PSParser::RLINETO - 128))
      | (1ULL << (PSParser::ARC - 128))
      | (1ULL << (PSParser::ARCN - 128))
      | (1ULL << (PSParser::ARCTO - 128))
      | (1ULL << (PSParser::CURVETO - 128))
      | (1ULL << (PSParser::RCURVETO - 128))
      | (1ULL << (PSParser::CLOSEPATH - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (PSParser::FLATTENPATH - 192))
      | (1ULL << (PSParser::REVERSEPATH - 192))
      | (1ULL << (PSParser::STROKEPATH - 192))
      | (1ULL << (PSParser::CHARPATH - 192))
      | (1ULL << (PSParser::CLIPPATH - 192))
      | (1ULL << (PSParser::PATHBBOX - 192))
      | (1ULL << (PSParser::PATHFORALL - 192))
      | (1ULL << (PSParser::INITCLIP - 192))
      | (1ULL << (PSParser::CLIP - 192))
      | (1ULL << (PSParser::EOCLIP - 192))
      | (1ULL << (PSParser::ERASEPAGE - 192))
      | (1ULL << (PSParser::FILL - 192))
      | (1ULL << (PSParser::EOFILL - 192))
      | (1ULL << (PSParser::STROKE - 192))
      | (1ULL << (PSParser::IMAGE - 192))
      | (1ULL << (PSParser::IMAGEMASK - 192))
      | (1ULL << (PSParser::SHOWPAGE - 192))
      | (1ULL << (PSParser::COPYPAGE - 192))
      | (1ULL << (PSParser::BANDDEVICE - 192))
      | (1ULL << (PSParser::FRAMEDEVICE - 192))
      | (1ULL << (PSParser::RENDERBANDS - 192))
      | (1ULL << (PSParser::DEFINEFONT - 192))
      | (1ULL << (PSParser::FINDFONT - 192))
      | (1ULL << (PSParser::SCALEFONT - 192))
      | (1ULL << (PSParser::MAKEFONT - 192))
      | (1ULL << (PSParser::SETFONT - 192))
      | (1ULL << (PSParser::CURRENTFONT - 192))
      | (1ULL << (PSParser::SHOW - 192))
      | (1ULL << (PSParser::ASHOW - 192))
      | (1ULL << (PSParser::WIDTHSHOW - 192))
      | (1ULL << (PSParser::AWIDTHSHOW - 192))
      | (1ULL << (PSParser::KSHOW - 192))
      | (1ULL << (PSParser::STRINGWIDTH - 192))
      | (1ULL << (PSParser::FONTDIRECTORY - 192))
      | (1ULL << (PSParser::STANDARDENCODING - 192))
      | (1ULL << (PSParser::CACHESTATUS - 192))
      | (1ULL << (PSParser::SETCACHEDEVICE - 192))
      | (1ULL << (PSParser::SETCHARWIDTH - 192))
      | (1ULL << (PSParser::SETCACHELIMIT - 192))
      | (1ULL << (PSParser::WHERE - 192)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PSParser::_decisionToDFA;
atn::PredictionContextCache PSParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PSParser::_atn;
std::vector<uint16_t> PSParser::_serializedATN;

std::vector<std::string> PSParser::_ruleNames = {
  "ps", "definitions", "procedure", "block", "operations"
};

std::vector<std::string> PSParser::_literalNames = {
  "", "'{'", "'}'", "'['", "']'", "'ifelse'", "'if'", "'def'", "'loop'", 
  "'repeat'", "'start'", "'exec'", "'quit'", "'for'", "'forall'", "'stop'", 
  "'stopped'", "'pop'", "'exch'", "'dup'", "'copy'", "'index'", "'roll'", 
  "'clear'", "'count'", "'mark'", "'cleartomark'", "'counttomark'", "'add'", 
  "'div'", "'idiv'", "'mod'", "'mul'", "'sub'", "'abs'", "'neg'", "'ceiling'", 
  "'floor'", "'round'", "'truncate'", "'sqrt'", "'atan'", "'cos'", "'sin'", 
  "'exp'", "'ln'", "'log'", "'rand'", "'srand'", "'rrand'", "'array'", "'length'", 
  "'get'", "'put'", "'getinterval'", "'putinterval'", "'aload'", "'astore'", 
  "'dict'", "'maxlength'", "'begin'", "'end'", "'load'", "'store'", "'known'", 
  "'errordict'", "'systemdict'", "'userdict'", "'currentdict'", "'countdictstack'", 
  "'dictstack'", "'string'", "'anchorsearch'", "'search'", "'token'", "'eq'", 
  "'ne'", "'ge'", "'gt'", "'le'", "'lt'", "'and'", "'not'", "'or'", "'xor'", 
  "'true'", "'false'", "'bitshift'", "'exit'", "'countexecstack'", "'execstack'", 
  "'type'", "'cvlit'", "'cvx'", "'xckeck'", "'executeonly'", "'noaccess'", 
  "'readonly'", "'rcheck'", "'wckeck'", "'cvi'", "'cvn'", "'cvr'", "'cvrs'", 
  "'cvs'", "'file'", "'closefile'", "'read'", "'write'", "'readhexstring'", 
  "'writehexstring'", "'readstring'", "'writestring'", "'readline'", "'bytesavailable'", 
  "'flush'", "'flushfile'", "'resetfile'", "'status'", "'run'", "'currentfile'", 
  "'print'", "'='", "'=='", "'stack'", "'pstack'", "'prompt'", "'echo'", 
  "'save'", "'restore'", "'vmstatus'", "'bind'", "'usertime'", "'version'", 
  "'gsave'", "'grestore'", "'grestoreall'", "'initgraphics'", "'setlinewidth'", 
  "'currentlinewidth'", "'setlinecap'", "'currentlinecap'", "'setlinejoin'", 
  "'currentlinejoin'", "'setmiterlimit'", "'currentmiterlimit'", "'setdash'", 
  "'currentdash'", "'setflat'", "'currentflat'", "'setgray'", "'sethsbcolor'", 
  "'currenthsbcolor'", "'setrgbcolor'", "'currentrgbcolor'", "'setscreen'", 
  "'currentscreen'", "'settransfer'", "'currenttransfer'", "'matrix'", "'currentmatrix'", 
  "'wcheck'", "'cvl'", "'cxv'", "'cvllt'", "'currentgray'", "'initmatrix'", 
  "'identmatrix'", "'defaultmatrix'", "'setmatrix'", "'translate'", "'scale'", 
  "'rotate'", "'concat'", "'concatmatrix'", "'transofrm'", "'dtransform'", 
  "'itransofrm'", "'idtransform'", "'invertmatrix'", "'newpath'", "'currentpoint'", 
  "'moveto'", "'rmoveto'", "'lineto'", "'rlineto'", "'arc'", "'arcn'", "'arcto'", 
  "'curveto'", "'rcurveto'", "'closepath'", "'flattenpath'", "'reversepath'", 
  "'strokepath'", "'charpath'", "'clippath'", "'pathbbox'", "'pathforall'", 
  "'initclip'", "'clip'", "'eoclip'", "'erasepage'", "'fill'", "'eofill'", 
  "'stroke'", "'image'", "'imagemask'", "'showpage'", "'copypage'", "'banddevice'", 
  "'framdevice'", "'renderbands'", "'definefont'", "'findfont'", "'scalefont'", 
  "'makefont'", "'setfont'", "'currentfont'", "'show'", "'ashow'", "'widthshow'", 
  "'adwidthshow'", "'kshow'", "'stringwidth'", "'fontdirectory'", "'standardencoding'", 
  "'cachestatus'", "'setcachedevice'", "'setcharwidth'", "'setcachelimit'", 
  "'where'"
};

std::vector<std::string> PSParser::_symbolicNames = {
  "", "", "", "", "", "IFELSE", "IF", "DEF", "LOOP", "REPEAT", "START", 
  "EXEC", "QUIT", "FOR", "FORALL", "STOP", "STOPPED", "POP", "EXCH", "DUP", 
  "COPY", "INDEX", "ROLL", "CLEAR", "COUNT", "MARK", "CLEARTOMARK", "COUNTTOMARK", 
  "ADD", "DIV", "IDIV", "MOD", "MUL", "SUB", "ABS", "NEG", "CEILING", "FLOOR", 
  "ROUND", "TRUNCATE", "SQRT", "ATAN", "COS", "SIN", "EXP", "LN", "LOG", 
  "RAND", "SRAND", "RRAND", "ARRAY", "LENGTH", "GET", "PUT", "GETINTERVAL", 
  "PUTINTERVAL", "ALOAD", "ASTORE", "DICT", "MAXLENGTH", "BEGIN", "END", 
  "LOAD", "STORE", "KNOWN", "ERRORDICT", "SYSTEMDICT", "USERDICT", "CURRENTDICT", 
  "COUNTDICTSTACK", "DICTSTACK", "STRING", "ANCHORSEARCH", "SEARCH", "TOKEN", 
  "EQ", "NE", "GE", "GT", "LE", "LT", "AND", "NOT", "OR", "XOR", "TRUE", 
  "FALSE", "BITSHIFT", "EXIT", "COUNTEXECSTACK", "EXECSTACK", "TYPE", "CVLIT", 
  "CVX", "XCHECK", "EXECUTEONLY", "NOACCESS", "READONLY", "RCHECK", "WCKECK", 
  "CVI", "CVN", "CVR", "CVRS", "CVS", "FILE", "CLOSEFILE", "READ", "WRITE", 
  "READHEXSTRING", "WRITEHEXSTRING", "READSTRING", "WRITESTRING", "READLINE", 
  "BYTESAVAILABLE", "FLUSH", "FLUSHFILE", "RESETFILE", "STATUS", "RUN", 
  "CURRENTFILE", "PRINT", "POP_OBJECT", "POP_OBJECT_PROCEDURE", "STACK", 
  "PSTACK", "PROMPT", "ECHO", "SAVE", "RESTORE", "VMSTATUS", "BIND", "USERTIME", 
  "VERSION", "GSAVE", "GRESTORE", "GRESTOREALL", "INITGRAPHICS", "SETLINEWIDTH", 
  "CURRENTLINEWIDTH", "SETLINECAP", "CURRENTLINECAP", "SETLINEJOIN", "CURRENTLINEJOIN", 
  "SETMITERLIMIT", "CURRENTMITERLIMIT", "SETDASH", "CURRENTDASH", "SETFLAT", 
  "CURRENTFLAT", "SETGRAY", "SETHSBCOLOR", "CURRENTHSBCOLOR", "SETRGBCOLOR", 
  "CURRENTRGBCOLOR", "SETSCREEN", "CURRENTSCREEN", "SETTRANSFER", "CURRENTTRANSFER", 
  "MATRIX", "CURRENTMATRIX", "WCHECK", "CVL", "CXV", "CVLLT", "CURRENTGRAY", 
  "INITMATRIX", "IDENTMATRIX", "DEFAULTMATRIX", "SETMATRIX", "TRANSLATE", 
  "SCALE", "ROTATE", "CONCAT", "CONCATMATRIX", "TRANSFORM", "DTRANSFORM", 
  "ITRANSFORM", "IDTRANSFORM", "INVERTMATRIX", "NEWPATH", "CURRENTPOINT", 
  "MOVETO", "RMOVETO", "LINETO", "RLINETO", "ARC", "ARCN", "ARCTO", "CURVETO", 
  "RCURVETO", "CLOSEPATH", "FLATTENPATH", "REVERSEPATH", "STROKEPATH", "CHARPATH", 
  "CLIPPATH", "PATHBBOX", "PATHFORALL", "INITCLIP", "CLIP", "EOCLIP", "ERASEPAGE", 
  "FILL", "EOFILL", "STROKE", "IMAGE", "IMAGEMASK", "SHOWPAGE", "COPYPAGE", 
  "BANDDEVICE", "FRAMEDEVICE", "RENDERBANDS", "DEFINEFONT", "FINDFONT", 
  "SCALEFONT", "MAKEFONT", "SETFONT", "CURRENTFONT", "SHOW", "ASHOW", "WIDTHSHOW", 
  "AWIDTHSHOW", "KSHOW", "STRINGWIDTH", "FONTDIRECTORY", "STANDARDENCODING", 
  "CACHESTATUS", "SETCACHEDEVICE", "SETCHARWIDTH", "SETCACHELIMIT", "WHERE", 
  "PRODECUREDEFNAME", "DEFINEDSTRING", "NUMBER", "INTEGER", "DECIMAL_INTEGER", 
  "REAL_NUMBER", "RADIX_NUMBER", "WHITESPACES", "COMMENT", "STRINGS", "PROCEDURESTRING", 
  "STRINGSWITHNUMBER"
};

dfa::Vocabulary PSParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PSParser::_tokenNames;

PSParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xf5, 0x6d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0xf, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x12, 0xb, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x17, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1a, 0xb, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x20, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x23, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x28, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2c, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x2f, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
    0x34, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x37, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x40, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x43, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x7, 0x3, 0x48, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4b, 0xb, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x4e, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x53, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x56, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x60, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 
    0x67, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x68, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x3, 0x4, 0x2, 0x7, 0x8, 
    0xa, 0xe9, 0x2, 0x7e, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x61, 0x3, 0x2, 0x2, 0x2, 0x8, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf, 0x5, 0x8, 0x5, 0x2, 0xd, 
    0xf, 0x5, 0x4, 0x3, 0x2, 0xe, 0xc, 0x3, 0x2, 0x2, 0x2, 0xe, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xf, 0x12, 0x3, 0x2, 0x2, 0x2, 0x10, 0xe, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x12, 0x10, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0xea, 0x2, 0x2, 0x14, 
    0x18, 0x7, 0x3, 0x2, 0x2, 0x15, 0x17, 0x5, 0x8, 0x5, 0x2, 0x16, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x16, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x4, 0x2, 
    0x2, 0x1c, 0x60, 0x7, 0x9, 0x2, 0x2, 0x1d, 0x21, 0x7, 0xea, 0x2, 0x2, 
    0x1e, 0x20, 0x5, 0x8, 0x5, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x24, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x60, 0x7, 0x9, 0x2, 0x2, 0x25, 0x27, 0x7, 0xea, 
    0x2, 0x2, 0x26, 0x28, 0x5, 0xa, 0x6, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x8, 0x5, 0x2, 0x2b, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x4, 
    0x2, 0x2, 0x31, 0x35, 0x7, 0x3, 0x2, 0x2, 0x32, 0x34, 0x5, 0x8, 0x5, 
    0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 
    0x7, 0x4, 0x2, 0x2, 0x39, 0x60, 0x5, 0xa, 0x6, 0x2, 0x3a, 0x3b, 0x7, 
    0xea, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0xeb, 0x2, 0x2, 0x3c, 0x60, 0x7, 0x9, 
    0x2, 0x2, 0x3d, 0x41, 0x7, 0x3, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x8, 0x5, 
    0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x4d, 
    0x7, 0x4, 0x2, 0x2, 0x45, 0x49, 0x7, 0x3, 0x2, 0x2, 0x46, 0x48, 0x5, 
    0x8, 0x5, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x4e, 0x7, 0x4, 0x2, 0x2, 0x4d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x60, 
    0x5, 0xa, 0x6, 0x2, 0x50, 0x54, 0x7, 0x3, 0x2, 0x2, 0x51, 0x53, 0x5, 
    0x8, 0x5, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x60, 0x7, 0x4, 0x2, 0x2, 0x58, 0x59, 0x7, 0x5, 0x2, 0x2, 0x59, 
    0x5a, 0x5, 0x8, 0x5, 0x2, 0x5a, 0x5b, 0x7, 0x6, 0x2, 0x2, 0x5b, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x60, 0x7, 0xea, 0x2, 0x2, 0x5d, 0x60, 0x7, 
    0xeb, 0x2, 0x2, 0x5e, 0x60, 0x7, 0xec, 0x2, 0x2, 0x5f, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x5, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 
    0xf3, 0x2, 0x2, 0x62, 0x7, 0x3, 0x2, 0x2, 0x2, 0x63, 0x67, 0x5, 0x6, 
    0x4, 0x2, 0x64, 0x67, 0x5, 0xa, 0x6, 0x2, 0x65, 0x67, 0x5, 0x4, 0x3, 
    0x2, 0x66, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x9, 0x2, 0x2, 0x2, 0x6b, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x10, 0xe, 0x10, 0x18, 0x21, 0x27, 0x2d, 0x35, 0x41, 
    0x49, 0x4d, 0x54, 0x5f, 0x66, 0x68, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PSParser::Initializer PSParser::_init;
