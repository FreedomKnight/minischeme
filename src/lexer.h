#ifndef LEXER_H
#define
typedef enum Token {
    T_IDENT, T_BOOLEAN, T_NUMBER, T_CHAR, T_STRING, T_LPAREN, T_RPAREN,
    T_VEC_LPAREN, T_QUOTE, T_QUASIQUOTE, T_UNQUOTE, T_SPLICE_UNQUOTE,
    T_DOT
} Token;
#endif
