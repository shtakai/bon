/*----------------------------------------------------------------------------*\
|*
|* Type Analysis AST walker which performs type inference and checking
|*
L*----------------------------------------------------------------------------*/

#pragma once
#include "bonCompilerPass.h"
#include "bonModuleState.h"

#include <string>
#include <map>

namespace bon {

class TypeAnalysisPass : public CompilerPass {
public:
  void process(NumberExprAST* node) override;
  void process(IntegerExprAST* node) override;
  void process(StringExprAST* node) override;
  void process(BoolExprAST* node) override;
  void process(UnitExprAST* node) override;
  void process(VariableExprAST* node) override;
  void process(ValueConstructorExprAST* node) override;
  void process(UnaryExprAST* node) override;
  void process(BinaryExprAST* node) override;
  void process(IfExprAST* node) override;
  void process(MatchCaseExprAST* node) override;
  void process(MatchExprAST* node) override;
  void process(CallExprAST* node) override;
  void process(PrototypeAST* node) override;
  void process(FunctionAST* node) override;
  void process(TypeAST* node) override;
  void process(TypeclassAST* node) override;
  void process(TypeclassImplAST* node) override;

  TypeAnalysisPass(ModuleState &state)
    : state_(state) {}

private:
  ModuleState &state_;
};

} // namespace bon
