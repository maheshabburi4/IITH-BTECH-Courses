// Generated from CoolLexer.g4 by ANTLR 4.5
package cool;
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CoolLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.5", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ERROR=1, TYPEID=2, OBJECTID=3, BOOL_CONST=4, INT_CONST=5, STR_CONST=6, 
		LPAREN=7, RPAREN=8, COLON=9, ATSYM=10, SEMICOLON=11, COMMA=12, PLUS=13, 
		MINUS=14, STAR=15, SLASH=16, TILDE=17, LT=18, EQUALS=19, LBRACE=20, RBRACE=21, 
		DOT=22, DARROW=23, LE=24, ASSIGN=25, CLASS=26, ELSE=27, FI=28, IF=29, 
		IN=30, INHERITS=31, LET=32, LOOP=33, POOL=34, THEN=35, WHILE=36, CASE=37, 
		ESAC=38, OF=39, NEW=40, ISVOID=41, NOT=42, SELF=43, SELF_TYPE=44, WHITESPACE=45, 
		SL_COMMENT=46, EN_COMMENT=47, UN_COMMENT=48, COMMENT=49, BACKSLASH=50, 
		EOF_STRING=51, UNTERMINATED=52, DIFFSTRING=53, REP=54, OP_COMMENT=55, 
		CL_COMMENT=56, IN_COMMENT_P=57, REP_1=58, OP_COM=59, REP_2=60, CL_COM=61, 
		INCOM_TEXT=62;
	public static final int IN_COMMENT = 1;
	public static final int MODCOM = 2;
	public static String[] modeNames = {
		"DEFAULT_MODE", "IN_COMMENT", "MODCOM"
	};

	public static final String[] ruleNames = {
		"SEMICOLON", "DARROW", "COLON", "LBRACE", "RBRACE", "LPAREN", "RPAREN", 
		"PLUS", "MINUS", "COMMA", "SLASH", "LT", "LE", "EQUALS", "DOT", "ASSIGN", 
		"ATSYM", "STAR", "TILDE", "SELF", "SELF_TYPE", "CLASS", "ELSE", "FI", 
		"IF", "IN", "INHERITS", "ISVOID", "LET", "LOOP", "POOL", "WHILE", "THEN", 
		"CASE", "ESAC", "NEW", "OF", "NOT", "TRUE", "FALSE", "BOOL_CONST", "INT_CONST", 
		"STR_CONST", "TYPEID", "OBJECTID", "WHITESPACE", "SL_COMMENT", "EN_COMMENT", 
		"UN_COMMENT", "COMMENT", "BACKSLASH", "EOF_STRING", "UNTERMINATED", "DIFFSTRING", 
		"REP", "OP_COMMENT", "CL_COMMENT", "IN_COMMENT_P", "REP_1", "OP_COM", 
		"REP_2", "CL_COM", "INCOM_TEXT"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, null, "'('", "')'", "':'", "'@'", 
		"';'", "','", "'+'", "'-'", "'*'", "'/'", "'~'", "'<'", "'='", "'{'", 
		"'}'", "'.'", "'=>'", "'<='", "'<-'", null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, "'self'", 
		"'SELF_TYPE'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "ERROR", "TYPEID", "OBJECTID", "BOOL_CONST", "INT_CONST", "STR_CONST", 
		"LPAREN", "RPAREN", "COLON", "ATSYM", "SEMICOLON", "COMMA", "PLUS", "MINUS", 
		"STAR", "SLASH", "TILDE", "LT", "EQUALS", "LBRACE", "RBRACE", "DOT", "DARROW", 
		"LE", "ASSIGN", "CLASS", "ELSE", "FI", "IF", "IN", "INHERITS", "LET", 
		"LOOP", "POOL", "THEN", "WHILE", "CASE", "ESAC", "OF", "NEW", "ISVOID", 
		"NOT", "SELF", "SELF_TYPE", "WHITESPACE", "SL_COMMENT", "EN_COMMENT", 
		"UN_COMMENT", "COMMENT", "BACKSLASH", "EOF_STRING", "UNTERMINATED", "DIFFSTRING", 
		"REP", "OP_COMMENT", "CL_COMMENT", "IN_COMMENT_P", "REP_1", "OP_COM", 
		"REP_2", "CL_COM", "INCOM_TEXT"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}



		/*
			YOU CAN ADD YOUR MEMBER VARIABLES AND METHODS HERE
		*/

		/**
		* Function to report errors.
		* Use this function whenever your lexer encounters any erroneous input
		* DO NOT EDIT THIS FUNCTION
		*/
		public void reportError(String errorString){
			setText(errorString);
			setType(ERROR);
		}
		public void notmatched()
		{
		Token t = _factory.create(_tokenFactorySourcePair, _type, _text, _channel, _tokenStartCharIndex, getCharIndex()-1, _tokenStartLine, _tokenStartCharPositionInLine);
		String text = t.getText();
		reportError(text);
		}
		public void processString() {
			Token t = _factory.create(_tokenFactorySourcePair, _type, _text, _channel, _tokenStartCharIndex, getCharIndex()-1, _tokenStartLine, _tokenStartCharPositionInLine);
			String text = t.getText();
			//write your code to test strings here
			String buffer="";
			int x=1;
			while(x<text.length()-1)
			{
			if(text.charAt(x) == '\u0000'){reportError("String contains null character"); return;}
			else if(text.charAt(x)=='\\')
			{
	        if(text.charAt(x+1)=='n') {buffer=buffer.concat("\n");}
	        else if(text.charAt(x+1)=='\n') {buffer=buffer.concat("\n");}
	        else if(text.charAt(x+1)=='t') {buffer=buffer.concat("\t");}
	        else if(text.charAt(x+1)=='b') {buffer=buffer.concat("\b");}
	        else if(text.charAt(x+1)=='f') {buffer=buffer.concat("\f");}
	        else if(text.charAt(x+1)=='n') {buffer=buffer.concat("\n");}
	        else if(text.charAt(x+1)=='0') {buffer=buffer.concat("0");}
			else if(text.charAt(x+1) == '\u0000'){reportError("String contains escaped null character."); return;}
	        else {buffer=buffer.concat(String.valueOf(text.charAt(x +1)));}
			x=x+2;
	        }
	        else {buffer=buffer.concat(String.valueOf(text.charAt(x))); x++;}
			if(buffer.length() > 1024) {
				reportError("String constant too long");
				return;
			}
	        }
	        setText(buffer);
	}



	public CoolLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CoolLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	@Override
	public void action(RuleContext _localctx, int ruleIndex, int actionIndex) {
		switch (ruleIndex) {
		case 42:
			STR_CONST_action((RuleContext)_localctx, actionIndex);
			break;
		case 47:
			EN_COMMENT_action((RuleContext)_localctx, actionIndex);
			break;
		case 48:
			UN_COMMENT_action((RuleContext)_localctx, actionIndex);
			break;
		case 50:
			BACKSLASH_action((RuleContext)_localctx, actionIndex);
			break;
		case 51:
			EOF_STRING_action((RuleContext)_localctx, actionIndex);
			break;
		case 52:
			UNTERMINATED_action((RuleContext)_localctx, actionIndex);
			break;
		case 53:
			DIFFSTRING_action((RuleContext)_localctx, actionIndex);
			break;
		case 54:
			REP_action((RuleContext)_localctx, actionIndex);
			break;
		case 58:
			REP_1_action((RuleContext)_localctx, actionIndex);
			break;
		case 60:
			REP_2_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void STR_CONST_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			processString();
			break;
		}
	}
	private void EN_COMMENT_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			 reportError("Unmatched *)"); 
			break;
		}
	}
	private void UN_COMMENT_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			 reportError("Unmatched *)"); 
			break;
		}
	}
	private void BACKSLASH_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			processString();if(getType()!=1)reportError("backslash at end of file");
			break;
		}
	}
	private void EOF_STRING_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			processString();if(getType()!=1)reportError("EOF in string constant");
			break;
		}
	}
	private void UNTERMINATED_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			processString();if(getType()!=1)reportError("Unterminated string constant"); 
			break;
		}
	}
	private void DIFFSTRING_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 6:
			notmatched();
			break;
		}
	}
	private void REP_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 7:
			 reportError("EOF in comment"); 
			break;
		}
	}
	private void REP_1_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 8:
			 reportError("EOF in comment"); 
			break;
		}
	}
	private void REP_2_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 9:
			 reportError("EOF in comment"); 
			break;
		}
	}

	public static final String _serializedATN =
		"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\2@\u01b7\b\1\b\1\b"+
		"\1\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n"+
		"\t\n\4\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21"+
		"\4\22\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30"+
		"\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37"+
		"\4 \t \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t"+
		"*\4+\t+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63"+
		"\4\64\t\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t"+
		"<\4=\t=\4>\t>\4?\t?\4@\t@\3\2\3\2\3\3\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6"+
		"\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3"+
		"\16\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3"+
		"\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3"+
		"\26\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\31\3\31\3"+
		"\31\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3"+
		"\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\37\3"+
		"\37\3\37\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3"+
		"\"\3#\3#\3#\3#\3#\3$\3$\3$\3$\3$\3%\3%\3%\3%\3&\3&\3&\3\'\3\'\3\'\3\'"+
		"\3(\3(\3(\3(\3(\3)\3)\3)\3)\3)\3)\3*\3*\5*\u011b\n*\3+\6+\u011e\n+\r+"+
		"\16+\u011f\3,\3,\3,\3,\7,\u0126\n,\f,\16,\u0129\13,\3,\3,\3,\3-\3-\7-"+
		"\u0130\n-\f-\16-\u0133\13-\3.\3.\7.\u0137\n.\f.\16.\u013a\13.\3/\6/\u013d"+
		"\n/\r/\16/\u013e\3/\3/\3\60\3\60\3\60\3\60\7\60\u0147\n\60\f\60\16\60"+
		"\u014a\13\60\3\60\5\60\u014d\n\60\3\60\3\60\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\62\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\63\3\63\3\63\3\64\3\64\3"+
		"\64\3\64\7\64\u0166\n\64\f\64\16\64\u0169\13\64\3\64\3\64\3\64\3\64\3"+
		"\65\3\65\3\65\3\65\7\65\u0173\n\65\f\65\16\65\u0176\13\65\3\65\3\65\3"+
		"\65\3\66\3\66\3\66\3\66\7\66\u017f\n\66\f\66\16\66\u0182\13\66\3\66\3"+
		"\66\3\66\3\67\3\67\3\67\38\38\38\38\39\39\39\39\39\39\3:\3:\3:\3:\3:\3"+
		":\3;\3;\3;\3;\3<\3<\3<\3<\3=\3=\3=\3=\3=\3=\3>\3>\3>\3>\3>\3>\3?\3?\3"+
		"?\3?\3?\3?\3@\3@\3@\3@\7\u0127\u0148\u0167\u0174\u0180\2A\5\r\7\31\t\13"+
		"\13\26\r\27\17\t\21\n\23\17\25\20\27\16\31\22\33\24\35\32\37\25!\30#\33"+
		"%\f\'\21)\23+--./\34\61\35\63\36\65\37\67 9!;+=\"?#A$C&E%G\'I(K*M)O,Q"+
		"\2S\2U\6W\7Y\b[\4]\5_/a\60c\61e\62g\63i\64k\65m\66o\67q8s9u:w;y<{=}>\177"+
		"?\u0081@\5\2\3\4\32\4\2EEee\4\2NNnn\4\2CCcc\4\2UUuu\4\2GGgg\4\2HHhh\4"+
		"\2KKkk\4\2PPpp\4\2JJjj\4\2TTtt\4\2VVvv\4\2XXxx\4\2QQqq\4\2FFff\4\2YYy"+
		"y\4\2WWww\3\2\62;\5\2\f\f$$^^\3\2C\\\6\2\62;C\\aac|\3\2c|\4\2\62;C|\5"+
		"\2\13\f\16\17\"\"\3\3\f\f\u01c0\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2"+
		"\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3"+
		"\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2"+
		"\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2"+
		"\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2"+
		"\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2"+
		"\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2U"+
		"\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2"+
		"\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2"+
		"\2o\3\2\2\2\3q\3\2\2\2\3s\3\2\2\2\3u\3\2\2\2\3w\3\2\2\2\4y\3\2\2\2\4{"+
		"\3\2\2\2\4}\3\2\2\2\4\177\3\2\2\2\4\u0081\3\2\2\2\5\u0083\3\2\2\2\7\u0085"+
		"\3\2\2\2\t\u0088\3\2\2\2\13\u008a\3\2\2\2\r\u008c\3\2\2\2\17\u008e\3\2"+
		"\2\2\21\u0090\3\2\2\2\23\u0092\3\2\2\2\25\u0094\3\2\2\2\27\u0096\3\2\2"+
		"\2\31\u0098\3\2\2\2\33\u009a\3\2\2\2\35\u009c\3\2\2\2\37\u009f\3\2\2\2"+
		"!\u00a1\3\2\2\2#\u00a3\3\2\2\2%\u00a6\3\2\2\2\'\u00a8\3\2\2\2)\u00aa\3"+
		"\2\2\2+\u00ac\3\2\2\2-\u00b1\3\2\2\2/\u00bb\3\2\2\2\61\u00c1\3\2\2\2\63"+
		"\u00c6\3\2\2\2\65\u00c9\3\2\2\2\67\u00cc\3\2\2\29\u00cf\3\2\2\2;\u00d8"+
		"\3\2\2\2=\u00df\3\2\2\2?\u00e3\3\2\2\2A\u00e8\3\2\2\2C\u00ed\3\2\2\2E"+
		"\u00f3\3\2\2\2G\u00f8\3\2\2\2I\u00fd\3\2\2\2K\u0102\3\2\2\2M\u0106\3\2"+
		"\2\2O\u0109\3\2\2\2Q\u010d\3\2\2\2S\u0112\3\2\2\2U\u011a\3\2\2\2W\u011d"+
		"\3\2\2\2Y\u0121\3\2\2\2[\u012d\3\2\2\2]\u0134\3\2\2\2_\u013c\3\2\2\2a"+
		"\u0142\3\2\2\2c\u0150\3\2\2\2e\u0156\3\2\2\2g\u015b\3\2\2\2i\u0161\3\2"+
		"\2\2k\u016e\3\2\2\2m\u017a\3\2\2\2o\u0186\3\2\2\2q\u0189\3\2\2\2s\u018d"+
		"\3\2\2\2u\u0193\3\2\2\2w\u0199\3\2\2\2y\u019d\3\2\2\2{\u01a1\3\2\2\2}"+
		"\u01a7\3\2\2\2\177\u01ad\3\2\2\2\u0081\u01b3\3\2\2\2\u0083\u0084\7=\2"+
		"\2\u0084\6\3\2\2\2\u0085\u0086\7?\2\2\u0086\u0087\7@\2\2\u0087\b\3\2\2"+
		"\2\u0088\u0089\7<\2\2\u0089\n\3\2\2\2\u008a\u008b\7}\2\2\u008b\f\3\2\2"+
		"\2\u008c\u008d\7\177\2\2\u008d\16\3\2\2\2\u008e\u008f\7*\2\2\u008f\20"+
		"\3\2\2\2\u0090\u0091\7+\2\2\u0091\22\3\2\2\2\u0092\u0093\7-\2\2\u0093"+
		"\24\3\2\2\2\u0094\u0095\7/\2\2\u0095\26\3\2\2\2\u0096\u0097\7.\2\2\u0097"+
		"\30\3\2\2\2\u0098\u0099\7\61\2\2\u0099\32\3\2\2\2\u009a\u009b\7>\2\2\u009b"+
		"\34\3\2\2\2\u009c\u009d\7>\2\2\u009d\u009e\7?\2\2\u009e\36\3\2\2\2\u009f"+
		"\u00a0\7?\2\2\u00a0 \3\2\2\2\u00a1\u00a2\7\60\2\2\u00a2\"\3\2\2\2\u00a3"+
		"\u00a4\7>\2\2\u00a4\u00a5\7/\2\2\u00a5$\3\2\2\2\u00a6\u00a7\7B\2\2\u00a7"+
		"&\3\2\2\2\u00a8\u00a9\7,\2\2\u00a9(\3\2\2\2\u00aa\u00ab\7\u0080\2\2\u00ab"+
		"*\3\2\2\2\u00ac\u00ad\7u\2\2\u00ad\u00ae\7g\2\2\u00ae\u00af\7n\2\2\u00af"+
		"\u00b0\7h\2\2\u00b0,\3\2\2\2\u00b1\u00b2\7U\2\2\u00b2\u00b3\7G\2\2\u00b3"+
		"\u00b4\7N\2\2\u00b4\u00b5\7H\2\2\u00b5\u00b6\7a\2\2\u00b6\u00b7\7V\2\2"+
		"\u00b7\u00b8\7[\2\2\u00b8\u00b9\7R\2\2\u00b9\u00ba\7G\2\2\u00ba.\3\2\2"+
		"\2\u00bb\u00bc\t\2\2\2\u00bc\u00bd\t\3\2\2\u00bd\u00be\t\4\2\2\u00be\u00bf"+
		"\t\5\2\2\u00bf\u00c0\t\5\2\2\u00c0\60\3\2\2\2\u00c1\u00c2\t\6\2\2\u00c2"+
		"\u00c3\t\3\2\2\u00c3\u00c4\t\5\2\2\u00c4\u00c5\t\6\2\2\u00c5\62\3\2\2"+
		"\2\u00c6\u00c7\t\7\2\2\u00c7\u00c8\t\b\2\2\u00c8\64\3\2\2\2\u00c9\u00ca"+
		"\t\b\2\2\u00ca\u00cb\t\7\2\2\u00cb\66\3\2\2\2\u00cc\u00cd\t\b\2\2\u00cd"+
		"\u00ce\t\t\2\2\u00ce8\3\2\2\2\u00cf\u00d0\t\b\2\2\u00d0\u00d1\t\t\2\2"+
		"\u00d1\u00d2\t\n\2\2\u00d2\u00d3\t\6\2\2\u00d3\u00d4\t\13\2\2\u00d4\u00d5"+
		"\t\b\2\2\u00d5\u00d6\t\f\2\2\u00d6\u00d7\t\5\2\2\u00d7:\3\2\2\2\u00d8"+
		"\u00d9\t\b\2\2\u00d9\u00da\t\5\2\2\u00da\u00db\t\r\2\2\u00db\u00dc\t\16"+
		"\2\2\u00dc\u00dd\t\b\2\2\u00dd\u00de\t\17\2\2\u00de<\3\2\2\2\u00df\u00e0"+
		"\t\3\2\2\u00e0\u00e1\t\6\2\2\u00e1\u00e2\t\f\2\2\u00e2>\3\2\2\2\u00e3"+
		"\u00e4\t\3\2\2\u00e4\u00e5\t\16\2\2\u00e5\u00e6\t\16\2\2\u00e6\u00e7\4"+
		"rr\2\u00e7@\3\2\2\2\u00e8\u00e9\4rr\2\u00e9\u00ea\t\16\2\2\u00ea\u00eb"+
		"\t\16\2\2\u00eb\u00ec\t\3\2\2\u00ecB\3\2\2\2\u00ed\u00ee\t\20\2\2\u00ee"+
		"\u00ef\t\n\2\2\u00ef\u00f0\t\b\2\2\u00f0\u00f1\t\3\2\2\u00f1\u00f2\t\6"+
		"\2\2\u00f2D\3\2\2\2\u00f3\u00f4\t\f\2\2\u00f4\u00f5\t\n\2\2\u00f5\u00f6"+
		"\t\6\2\2\u00f6\u00f7\t\t\2\2\u00f7F\3\2\2\2\u00f8\u00f9\t\2\2\2\u00f9"+
		"\u00fa\t\4\2\2\u00fa\u00fb\t\5\2\2\u00fb\u00fc\t\6\2\2\u00fcH\3\2\2\2"+
		"\u00fd\u00fe\t\6\2\2\u00fe\u00ff\t\5\2\2\u00ff\u0100\t\4\2\2\u0100\u0101"+
		"\t\2\2\2\u0101J\3\2\2\2\u0102\u0103\t\t\2\2\u0103\u0104\t\6\2\2\u0104"+
		"\u0105\t\20\2\2\u0105L\3\2\2\2\u0106\u0107\t\16\2\2\u0107\u0108\t\7\2"+
		"\2\u0108N\3\2\2\2\u0109\u010a\t\t\2\2\u010a\u010b\t\16\2\2\u010b\u010c"+
		"\t\f\2\2\u010cP\3\2\2\2\u010d\u010e\7v\2\2\u010e\u010f\t\13\2\2\u010f"+
		"\u0110\t\21\2\2\u0110\u0111\t\6\2\2\u0111R\3\2\2\2\u0112\u0113\7h\2\2"+
		"\u0113\u0114\t\4\2\2\u0114\u0115\t\3\2\2\u0115\u0116\t\5\2\2\u0116\u0117"+
		"\t\6\2\2\u0117T\3\2\2\2\u0118\u011b\5Q(\2\u0119\u011b\5S)\2\u011a\u0118"+
		"\3\2\2\2\u011a\u0119\3\2\2\2\u011bV\3\2\2\2\u011c\u011e\t\22\2\2\u011d"+
		"\u011c\3\2\2\2\u011e\u011f\3\2\2\2\u011f\u011d\3\2\2\2\u011f\u0120\3\2"+
		"\2\2\u0120X\3\2\2\2\u0121\u0127\7$\2\2\u0122\u0123\7^\2\2\u0123\u0126"+
		"\13\2\2\2\u0124\u0126\n\23\2\2\u0125\u0122\3\2\2\2\u0125\u0124\3\2\2\2"+
		"\u0126\u0129\3\2\2\2\u0127\u0128\3\2\2\2\u0127\u0125\3\2\2\2\u0128\u012a"+
		"\3\2\2\2\u0129\u0127\3\2\2\2\u012a\u012b\7$\2\2\u012b\u012c\b,\2\2\u012c"+
		"Z\3\2\2\2\u012d\u0131\t\24\2\2\u012e\u0130\t\25\2\2\u012f\u012e\3\2\2"+
		"\2\u0130\u0133\3\2\2\2\u0131\u012f\3\2\2\2\u0131\u0132\3\2\2\2\u0132\\"+
		"\3\2\2\2\u0133\u0131\3\2\2\2\u0134\u0138\t\26\2\2\u0135\u0137\t\27\2\2"+
		"\u0136\u0135\3\2\2\2\u0137\u013a\3\2\2\2\u0138\u0136\3\2\2\2\u0138\u0139"+
		"\3\2\2\2\u0139^\3\2\2\2\u013a\u0138\3\2\2\2\u013b\u013d\t\30\2\2\u013c"+
		"\u013b\3\2\2\2\u013d\u013e\3\2\2\2\u013e\u013c\3\2\2\2\u013e\u013f\3\2"+
		"\2\2\u013f\u0140\3\2\2\2\u0140\u0141\b/\3\2\u0141`\3\2\2\2\u0142\u0143"+
		"\7/\2\2\u0143\u0144\7/\2\2\u0144\u0148\3\2\2\2\u0145\u0147\13\2\2\2\u0146"+
		"\u0145\3\2\2\2\u0147\u014a\3\2\2\2\u0148\u0149\3\2\2\2\u0148\u0146\3\2"+
		"\2\2\u0149\u014c\3\2\2\2\u014a\u0148\3\2\2\2\u014b\u014d\t\31\2\2\u014c"+
		"\u014b\3\2\2\2\u014d\u014e\3\2\2\2\u014e\u014f\b\60\3\2\u014fb\3\2\2\2"+
		"\u0150\u0151\7,\2\2\u0151\u0152\7+\2\2\u0152\u0153\3\2\2\2\u0153\u0154"+
		"\7\2\2\3\u0154\u0155\b\61\4\2\u0155d\3\2\2\2\u0156\u0157\7,\2\2\u0157"+
		"\u0158\7+\2\2\u0158\u0159\3\2\2\2\u0159\u015a\b\62\5\2\u015af\3\2\2\2"+
		"\u015b\u015c\7*\2\2\u015c\u015d\7,\2\2\u015d\u015e\3\2\2\2\u015e\u015f"+
		"\b\63\6\2\u015f\u0160\b\63\3\2\u0160h\3\2\2\2\u0161\u0167\7$\2\2\u0162"+
		"\u0163\7^\2\2\u0163\u0166\13\2\2\2\u0164\u0166\n\23\2\2\u0165\u0162\3"+
		"\2\2\2\u0165\u0164\3\2\2\2\u0166\u0169\3\2\2\2\u0167\u0168\3\2\2\2\u0167"+
		"\u0165\3\2\2\2\u0168\u016a\3\2\2\2\u0169\u0167\3\2\2\2\u016a\u016b\7^"+
		"\2\2\u016b\u016c\7\2\2\3\u016c\u016d\b\64\7\2\u016dj\3\2\2\2\u016e\u0174"+
		"\7$\2\2\u016f\u0170\7^\2\2\u0170\u0173\13\2\2\2\u0171\u0173\n\23\2\2\u0172"+
		"\u016f\3\2\2\2\u0172\u0171\3\2\2\2\u0173\u0176\3\2\2\2\u0174\u0175\3\2"+
		"\2\2\u0174\u0172\3\2\2\2\u0175\u0177\3\2\2\2\u0176\u0174\3\2\2\2\u0177"+
		"\u0178\7\2\2\3\u0178\u0179\b\65\b\2\u0179l\3\2\2\2\u017a\u0180\7$\2\2"+
		"\u017b\u017f\n\23\2\2\u017c\u017d\7^\2\2\u017d\u017f\13\2\2\2\u017e\u017b"+
		"\3\2\2\2\u017e\u017c\3\2\2\2\u017f\u0182\3\2\2\2\u0180\u0181\3\2\2\2\u0180"+
		"\u017e\3\2\2\2\u0181\u0183\3\2\2\2\u0182\u0180\3\2\2\2\u0183\u0184\7\f"+
		"\2\2\u0184\u0185\b\66\t\2\u0185n\3\2\2\2\u0186\u0187\13\2\2\2\u0187\u0188"+
		"\b\67\n\2\u0188p\3\2\2\2\u0189\u018a\13\2\2\2\u018a\u018b\7\2\2\3\u018b"+
		"\u018c\b8\13\2\u018cr\3\2\2\2\u018d\u018e\7*\2\2\u018e\u018f\7,\2\2\u018f"+
		"\u0190\3\2\2\2\u0190\u0191\b9\f\2\u0191\u0192\b9\3\2\u0192t\3\2\2\2\u0193"+
		"\u0194\7,\2\2\u0194\u0195\7+\2\2\u0195\u0196\3\2\2\2\u0196\u0197\b:\r"+
		"\2\u0197\u0198\b:\3\2\u0198v\3\2\2\2\u0199\u019a\13\2\2\2\u019a\u019b"+
		"\3\2\2\2\u019b\u019c\b;\3\2\u019cx\3\2\2\2\u019d\u019e\13\2\2\2\u019e"+
		"\u019f\7\2\2\3\u019f\u01a0\b<\16\2\u01a0z\3\2\2\2\u01a1\u01a2\7*\2\2\u01a2"+
		"\u01a3\7,\2\2\u01a3\u01a4\3\2\2\2\u01a4\u01a5\b=\f\2\u01a5\u01a6\b=\3"+
		"\2\u01a6|\3\2\2\2\u01a7\u01a8\7,\2\2\u01a8\u01a9\7+\2\2\u01a9\u01aa\3"+
		"\2\2\2\u01aa\u01ab\7\2\2\3\u01ab\u01ac\b>\17\2\u01ac~\3\2\2\2\u01ad\u01ae"+
		"\7,\2\2\u01ae\u01af\7+\2\2\u01af\u01b0\3\2\2\2\u01b0\u01b1\b?\r\2\u01b1"+
		"\u01b2\b?\3\2\u01b2\u0080\3\2\2\2\u01b3\u01b4\13\2\2\2\u01b4\u01b5\3\2"+
		"\2\2\u01b5\u01b6\b@\3\2\u01b6\u0082\3\2\2\2\24\2\3\4\u011a\u011f\u0125"+
		"\u0127\u0131\u0138\u013e\u0148\u014c\u0165\u0167\u0172\u0174\u017e\u0180"+
		"\20\3,\2\b\2\2\3\61\3\3\62\4\7\3\2\3\64\5\3\65\6\3\66\7\3\67\b\38\t\7"+
		"\4\2\6\2\2\3<\n\3>\13";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}