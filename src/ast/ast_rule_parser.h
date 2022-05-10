#ifndef AST_RULE_PARSER_H_
#define AST_RULE_PARSER_H_

#include <string>

class AstRuleParser {
public:
  AstRuleParser();

  ~AstRuleParser();

  void Parse(const std::string &path);
};

#endif // AST_RULE_PARSER_H_