
// Generated from PS.g4 by ANTLR 4.7

#pragma once


#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "PSVisitor.h"


using namespace std;
using namespace antlr4;


/**
 * This class provides an empty implementation of PSVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PSBaseVisitor : public PSVisitor {
public:

  vector<misc::Interval> intervals;
  vector<string> texts;
  
  virtual antlrcpp::Any visitPs(PSParser::PsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));return  visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinitions(PSParser::DefinitionsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));return  visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure(PSParser::ProcedureContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));return  visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(PSParser::BlockContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));return  visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperations(PSParser::OperationsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));return  visitChildren(ctx);
  }



};

