
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* First part of user declarations.  */


/* Line 311 of lalr1.cc  */
#line 41 "parser.tab.cpp"


#include "parser.tab.hpp"

/* User implementation prologue.  */


/* Line 317 of lalr1.cc  */
#line 50 "parser.tab.cpp"
/* Unqualified %code blocks.  */

/* Line 318 of lalr1.cc  */
#line 42 "parser.ypp"

	// Prototype for the yylex function
	static int yylex(BisonFlex::Parser::semantic_type * yylval,
	                 BisonFlex::Parser::location_type * yylloc,
	                 BisonFlex::Scanner &scanner);



/* Line 318 of lalr1.cc  */
#line 64 "parser.tab.cpp"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


/* Line 380 of lalr1.cc  */
#line 12 "parser.ypp"
namespace BisonFlex {

/* Line 380 of lalr1.cc  */
#line 132 "parser.tab.cpp"
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  Parser::Parser (BisonFlex::Scanner &scanner_yyarg, std::vector< std::vector<std::string> > &configlines_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      configlines (configlines_yyarg)
  {
  }

  Parser::~Parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  Parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  Parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  Parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  Parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  int
  Parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc, scanner);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 21:

/* Line 678 of lalr1.cc  */
#line 79 "parser.ypp"
    { std::vector<std::string>  line ;
						     line.push_back ( (yysemantic_stack_[(3) - (2)]) ) ;
						     configlines.push_back ( line ) ; }
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 85 "parser.ypp"
    { std::vector<std::string>  line ;
						     line.push_back ( (yysemantic_stack_[(4) - (2)]) ) ;
						     line.push_back ( (yysemantic_stack_[(4) - (4)]) ) ; 
						     configlines.push_back ( line ) ; }
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 93 "parser.ypp"
    { std::vector<std::string>  line ;
						     	    line.push_back ( (yysemantic_stack_[(5) - (2)]) ) ;
						            line.push_back ( (yysemantic_stack_[(5) - (4)]) ) ; 
						            line.push_back ( (yysemantic_stack_[(5) - (5)]) ) ; 
						     	    configlines.push_back ( line ) ; }
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 101 "parser.ypp"
    { std::vector<std::string>  line ;
						     	    line.push_back ( (yysemantic_stack_[(6) - (2)]) ) ;
						            line.push_back ( (yysemantic_stack_[(6) - (4)]) ) ; 
						            line.push_back ( (yysemantic_stack_[(6) - (5)]) ) ;
						            line.push_back ( (yysemantic_stack_[(6) - (6)]) ) ;
						     	    configlines.push_back ( line ) ; }
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 110 "parser.ypp"
    { std::vector<std::string>  line ;
								     	    line.push_back ( (yysemantic_stack_[(7) - (2)]) ) ;
								            line.push_back ( (yysemantic_stack_[(7) - (4)]) ) ; 
								            line.push_back ( (yysemantic_stack_[(7) - (5)]) ) ; 
								            line.push_back ( (yysemantic_stack_[(7) - (6)]) ) ; 
								            line.push_back ( (yysemantic_stack_[(7) - (7)]) ) ; 
								     	    configlines.push_back ( line ) ; }
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 120 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    line.push_back ( (yysemantic_stack_[(8) - (2)]) ) ;
									            line.push_back ( (yysemantic_stack_[(8) - (4)]) ) ; 
									            line.push_back ( (yysemantic_stack_[(8) - (5)]) ) ; 
									            line.push_back ( (yysemantic_stack_[(8) - (6)]) ) ; 
									            line.push_back ( (yysemantic_stack_[(8) - (7)]) ) ; 
									            line.push_back ( (yysemantic_stack_[(8) - (8)]) ) ; 
						     	    			    configlines.push_back ( line ) ; }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 131 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    	line.push_back ( (yysemantic_stack_[(9) - (2)]) ) ;
									            	line.push_back ( (yysemantic_stack_[(9) - (4)]) ) ; 
									            	line.push_back ( (yysemantic_stack_[(9) - (5)]) ) ; 
									            	line.push_back ( (yysemantic_stack_[(9) - (6)]) ) ; 
									            	line.push_back ( (yysemantic_stack_[(9) - (7)]) ) ; 
									            	line.push_back ( (yysemantic_stack_[(9) - (8)]) ) ; 
									            	line.push_back ( (yysemantic_stack_[(9) - (9)]) ) ; 
						     	    			    	configlines.push_back ( line ) ; }
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 143 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(10) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(10) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(10) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(10) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(10) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(10) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(10) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(10) - (10)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 157 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(11) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(11) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(11) - (11)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 172 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(12) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(12) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(12) - (12)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 189 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(13) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(13) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (12)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(13) - (13)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 207 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(14) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(14) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (12)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (13)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(14) - (14)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 227 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(15) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(15) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (12)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (13)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (14)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(15) - (15)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 248 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(16) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(16) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (12)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (13)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (14)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (15)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(16) - (16)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 270 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(17) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(17) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (12)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (13)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (14)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (15)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (16)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(17) - (17)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 293 "parser.ypp"
    { std::vector<std::string>  line ;
									     	    		line.push_back ( (yysemantic_stack_[(18) - (2)]) ) ;
									            		line.push_back ( (yysemantic_stack_[(18) - (4)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (5)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (6)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (7)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (8)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (9)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (10)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (11)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (12)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (13)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (14)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (15)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (16)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (17)]) ) ; 
									            		line.push_back ( (yysemantic_stack_[(18) - (18)]) ) ; 
												configlines.push_back ( line ) ; }
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 317 "parser.ypp"
    { }
    break;



/* Line 678 of lalr1.cc  */
#line 695 "parser.tab.cpp"
	default:
          break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
	  }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (int yystate)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char Parser::yypact_ninf_ = -5;
  const signed char
  Parser::yypact_[] =
  {
        -4,    -5,     1,     0,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,     2,    -5,    -5,     4,     5,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -5
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  Parser::yydefact_[] =
  {
         0,    37,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     1,     2,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  Parser::yypgoto_[] =
  {
        -5,    -5,    20,    -5,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  Parser::yydefgoto_[] =
  {
        -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char Parser::yytable_ninf_ = -1;
  const unsigned char
  Parser::yytable_[] =
  {
        23,     1,     2,     0,    22,     1,     2,    26,    27,    25,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    24
  };

  /* YYCHECK.  */
  const signed char
  Parser::yycheck_[] =
  {
         0,     5,     6,    -1,     3,     5,     6,     3,     3,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  Parser::yystos_[] =
  {
         0,     5,     6,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     3,     0,    10,     7,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  Parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  Parser::yyr1_[] =
  {
         0,     8,     9,     9,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  Parser::yyr2_[] =
  {
         0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const Parser::yytname_[] =
  {
    "$end", "error", "$undefined", "STRING", "SEPARATOR", "COMMENTAIRE",
  "COMMAND_START", "COMMAND_STOP", "$accept", "input", "line", "line_0",
  "line_1", "line_2", "line_3", "line_4", "line_5", "line_6", "line_7",
  "line_8", "line_9", "line_10", "line_11", "line_12", "line_13",
  "line_14", "line_15", "commentaire", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const Parser::rhs_number_type
  Parser::yyrhs_[] =
  {
         9,     0,    -1,     9,    10,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,     6,     3,     7,    -1,     6,     3,     7,     3,
      -1,     6,     3,     7,     3,     3,    -1,     6,     3,     7,
       3,     3,     3,    -1,     6,     3,     7,     3,     3,     3,
       3,    -1,     6,     3,     7,     3,     3,     3,     3,     3,
      -1,     6,     3,     7,     3,     3,     3,     3,     3,     3,
      -1,     6,     3,     7,     3,     3,     3,     3,     3,     3,
       3,    -1,     6,     3,     7,     3,     3,     3,     3,     3,
       3,     3,     3,    -1,     6,     3,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     3,    -1,     6,     3,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
      -1,     6,     3,     7,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,    -1,     6,     3,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,    -1,     6,     3,     7,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,    -1,     6,
       3,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,    -1,     6,     3,     7,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,    -1,     5,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  Parser::yyprhs_[] =
  {
         0,     0,     3,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    46,    51,    57,    64,    72,    81,    91,   102,
     114,   127,   141,   156,   172,   189,   207,   226
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  Parser::yyrline_[] =
  {
         0,    54,    54,    55,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    79,    85,    93,   101,   110,   120,   131,   143,   157,
     172,   189,   207,   227,   248,   270,   293,   317
  };

  // Print the state stack on the debug stream.
  void
  Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  Parser::token_number_type
  Parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int Parser::yyeof_ = 0;
  const int Parser::yylast_ = 23;
  const int Parser::yynnts_ = 20;
  const int Parser::yyempty_ = -2;
  const int Parser::yyfinal_ = 23;
  const int Parser::yyterror_ = 1;
  const int Parser::yyerrcode_ = 256;
  const int Parser::yyntokens_ = 8;

  const unsigned int Parser::yyuser_token_number_max_ = 262;
  const Parser::token_number_type Parser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 12 "parser.ypp"
} // BisonFlex

/* Line 1054 of lalr1.cc  */
#line 1157 "parser.tab.cpp"


/* Line 1056 of lalr1.cc  */
#line 319 "parser.ypp"


// Error function throws an exception (std::string) with the location and error message
void BisonFlex::Parser::error(const BisonFlex::Parser::location_type &loc,
                                          const std::string &msg) {
	
	std::cerr << "Parser Error at " << loc << ": " << msg << std::endl ;
	std::ostringstream ret;
	ret << "Parser Error at " << loc << ": " << msg;
	throw ret.str();
}

// Now that we have the Parser declared, we can declare the Scanner and implement
// the yylex function
#include "scanner.h"
static int yylex(BisonFlex::Parser::semantic_type * yylval,
                 BisonFlex::Parser::location_type * yylloc,
                 BisonFlex::Scanner &scanner) {
	return scanner.yylex(yylval, yylloc);
}


