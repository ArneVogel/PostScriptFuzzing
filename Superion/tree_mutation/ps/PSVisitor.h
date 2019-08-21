
// Generated from PS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "PSParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PSParser.
 */
class  PSVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PSParser.
   */
    virtual antlrcpp::Any visitPs(PSParser::PsContext *context) = 0;

    virtual antlrcpp::Any visitDefinitions(PSParser::DefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitProcedure(PSParser::ProcedureContext *context) = 0;

    virtual antlrcpp::Any visitBlock(PSParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitOperations(PSParser::OperationsContext *context) = 0;


};

