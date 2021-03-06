#ifndef CONFIG_H_
#define CONFIG_H_

#define ROPC_VERSION "1.0"
#undef LEXER_DEBUG
#undef PARSER_DEBUG
#undef DATA_DEBUG
#define LEXER_READ_CPP
#undef SLOW_LOAD_SAVE
#define MAX_FUNC_ARGS 10

extern int arch_regparm;
extern int optimize_imm;
extern int optimize_add;
extern int optimize_reg;
extern int optimize_jmp;
extern int show_reg_set;
extern int inloop_stack;

extern const unsigned char *binmap;

#endif
