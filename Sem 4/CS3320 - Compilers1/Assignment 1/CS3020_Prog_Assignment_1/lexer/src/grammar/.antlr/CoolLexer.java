// Generated from /media/edith/New Volume/Sem 4/Compilers I/Assignment 1/CS3020_Prog_Assignment_1/lexer/src/grammar/CoolLexer.g4 by ANTLR 4.7.1
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
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ERROR=1, TYPEID=2, OBJECTID=3, BOOL_CONST=4, INT_CONST=5, STR_CONST=6, 
		LPAREN=7, RPAREN=8, COLON=9, ATSYM=10, SEMICOLON=11, COMMA=12, PLUS=13, 
		MINUS=14, STAR=15, SLASH=16, TILDE=17, LT=18, EQUALS=19, LBRACE=20, RBRACE=21, 
		DOT=22, DARROW=23, LE=24, ASSIGN=25, CLASS=26, ELSE=27, FI=28, IF=29, 
		IN=30, INHERITS=31, LET=32, LOOP=33, POOL=34, THEN=35, WHILE=36, CASE=37, 
		ESAC=38, OF=39, NEW=40, ISVOID=41, NOT=42, UNMATCHED=43, EOF_STR=44, EOF_COMMENT=45, 
		LINE_COMMENT=46, BLOCK_COMMENT=47, WS=48, INCORRECT_CHARACTERS=49, STR_END=50, 
		STR_EOF=51, STR_NEWLINE=52, NESTED_EOF_COMMENT=53, COMMENT_START=54, COMMENT_END=55, 
		COMMENT_EOF=56, COMMENT_BODY=57;
	public static final int
		STR_MODE=1, COMMENT_MODE=2;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE", "STR_MODE", "COMMENT_MODE"
	};

	public static final String[] ruleNames = {
		"UNMATCHED", "EOF_STR", "EOF_COMMENT", "DARROW", "LPAREN", "RPAREN", "COLON", 
		"ATSYM", "SEMICOLON", "COMMA", "PLUS", "MINUS", "STAR", "SLASH", "TILDE", 
		"ASSIGN", "EQUALS", "LBRACE", "RBRACE", "LT", "LE", "DOT", "A", "B", "C", 
		"D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", 
		"R", "S", "T", "U", "V", "W", "X", "Y", "Z", "CLASS", "ELSE", "FI", "IF", 
		"IN", "INHERITS", "LET", "LOOP", "POOL", "THEN", "WHILE", "CASE", "ESAC", 
		"OF", "NEW", "ISVOID", "NOT", "TRUE", "FALSE", "BOOL_CONST", "INT_CONST", 
		"STR_CONST", "TYPEID", "OBJECTID", "LINE_COMMENT", "BLOCK_COMMENT", "WS", 
		"INCORRECT_CHARACTERS", "STR_END", "STR_EOF", "STR_NEWLINE", "STR_BODY", 
		"NESTED_EOF_COMMENT", "COMMENT_START", "COMMENT_END", "COMMENT_EOF", "COMMENT_BODY"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, "'\"'", "'('", "')'", "':'", "'@'", 
		"';'", "','", "'+'", "'-'", "'*'", "'/'", "'~'", "'<'", "'='", "'{'", 
		"'}'", "'.'", "'=>'", "'<='", "'<-'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "ERROR", "TYPEID", "OBJECTID", "BOOL_CONST", "INT_CONST", "STR_CONST", 
		"LPAREN", "RPAREN", "COLON", "ATSYM", "SEMICOLON", "COMMA", "PLUS", "MINUS", 
		"STAR", "SLASH", "TILDE", "LT", "EQUALS", "LBRACE", "RBRACE", "DOT", "DARROW", 
		"LE", "ASSIGN", "CLASS", "ELSE", "FI", "IF", "IN", "INHERITS", "LET", 
		"LOOP", "POOL", "THEN", "WHILE", "CASE", "ESAC", "OF", "NEW", "ISVOID", 
		"NOT", "UNMATCHED", "EOF_STR", "EOF_COMMENT", "LINE_COMMENT", "BLOCK_COMMENT", 
		"WS", "INCORRECT_CHARACTERS", "STR_END", "STR_EOF", "STR_NEWLINE", "NESTED_EOF_COMMENT", 
		"COMMENT_START", "COMMENT_END", "COMMENT_EOF", "COMMENT_BODY"
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
		// function for checking invalid character
		public void invalidCharacter() {
			Token t = _factory.create(_tokenFactorySourcePair, _type, _text, _channel, _tokenStartCharIndex, getCharIndex()-1, _tokenStartLine, _tokenStartCharPositionInLine);
			String text = t.getText();
			// has to report error as string containing that character
			reportError(text);
		}

		/**
		* Function to report errors.
		* Use this function whenever your lexer encounters any erroneous input
		* DO NOT EDIT THIS FUNCTION
		*/
		public void reportError(String errorString){
			setText(errorString);
			setType(ERROR);
		}

		public void processString(){
			Token t = _factory.create(_tokenFactorySourcePair, _type, _text, _channel, _tokenStartCharIndex, getCharIndex()-1, _tokenStartLine, _tokenStartCharPositionInLine);
			String text = t.getText();

			//write your code to test strings here
			
			//declaring a string buffer to store the final characters
			// operations on stringbuffer objects are very simple
			StringBuffer buff_text = new StringBuffer();
			
			// processing string
			for(int index = 0; index < text.length()-1;index++){
				// for null character
				if(text.charAt(index) == '\0'){
					reportError("String contains null character");
					return ;
				}

				// for escape characters in the strings
				if(text.charAt(index) == '\\'){
					// for n,b,t,f we append with their escaped ascii value 
					if (text.charAt(index+1) == 'n'){
						buff_text.append('\n');
					}
					else if (text.charAt(index+1) == 'b'){
						buff_text.append('\b');
					}
					else if (text.charAt(index+1) == 't'){
						buff_text.append('\t');
					}
					else if (text.charAt(index+1) == 'f'){
						buff_text.append('\f');
					}
					// for escaped null character
					else if (text.charAt(index+1) == '\0'){			
						reportError("String contains escaped null character");
						return ;
					}
					else{
						//appending the character next to it
						buff_text.append(text.charAt(index+1));
					}
					// to skip the read of character next to it.
					// it helps in recognising escaped backslashes('\\\\')
					// and escaped doublequotes('\\\"')
					index++;
				}
				else{
					// just append the character to the buffer
					buff_text.append(text.charAt(index));
				}

				// if the string is too long
				if(buff_text.length()>1024){
					reportError("String constant too long");
					return;
				}
			}

			// if terminated properly
			if(text.charAt(text.length()-1)=='\"'){
				setText(buff_text.toString());
				setType(STR_CONST);
				return;
			}
			// if unescaped newline occurs
			else if(text.charAt(text.length()-1)=='\n'){
				reportError("Unterminated string constant");
				return;
			}
			// if terminated with EOF
			else{
				if(text.charAt(text.length()-2)=='\\')
					reportError("backslash at end of file");
				else 
				 	reportError("EOF in string constant");
				return;
			}
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
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	@Override
	public void action(RuleContext _localctx, int ruleIndex, int actionIndex) {
		switch (ruleIndex) {
		case 0:
			UNMATCHED_action((RuleContext)_localctx, actionIndex);
			break;
		case 1:
			EOF_STR_action((RuleContext)_localctx, actionIndex);
			break;
		case 2:
			EOF_COMMENT_action((RuleContext)_localctx, actionIndex);
			break;
		case 75:
			INCORRECT_CHARACTERS_action((RuleContext)_localctx, actionIndex);
			break;
		case 76:
			STR_END_action((RuleContext)_localctx, actionIndex);
			break;
		case 77:
			STR_EOF_action((RuleContext)_localctx, actionIndex);
			break;
		case 78:
			STR_NEWLINE_action((RuleContext)_localctx, actionIndex);
			break;
		case 80:
			NESTED_EOF_COMMENT_action((RuleContext)_localctx, actionIndex);
			break;
		case 83:
			COMMENT_EOF_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void UNMATCHED_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			reportError("Unmatched *)");
			break;
		}
	}
	private void EOF_STR_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			reportError("EOF in string constant");
			break;
		}
	}
	private void EOF_COMMENT_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			reportError("EOF in comment");
			break;
		}
	}
	private void INCORRECT_CHARACTERS_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			invalidCharacter();
			break;
		}
	}
	private void STR_END_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			processString();
			break;
		}
	}
	private void STR_EOF_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			processString();
			break;
		}
	}
	private void STR_NEWLINE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 6:
			processString();
			break;
		}
	}
	private void NESTED_EOF_COMMENT_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 7:
			reportError("EOF in comment");
			break;
		}
	}
	private void COMMENT_EOF_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 8:
			reportError("EOF in comment");
			break;
		}
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2;\u01e9\b\1\b\1\b"+
		"\1\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n"+
		"\t\n\4\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21"+
		"\4\22\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30"+
		"\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37"+
		"\4 \t \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t"+
		"*\4+\t+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63"+
		"\4\64\t\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t"+
		"<\4=\t=\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4"+
		"H\tH\4I\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\t"+
		"S\4T\tT\4U\tU\4V\tV\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3"+
		"\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\22"+
		"\3\22\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\30\3\30"+
		"\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37"+
		"\3 \3 \3!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3)\3)\3*\3"+
		"*\3+\3+\3,\3,\3-\3-\3.\3.\3/\3/\3\60\3\60\3\61\3\61\3\62\3\62\3\62\3\62"+
		"\3\62\3\62\3\63\3\63\3\63\3\63\3\63\3\64\3\64\3\64\3\65\3\65\3\65\3\66"+
		"\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\38\38\38\38\3"+
		"9\39\39\39\39\3:\3:\3:\3:\3:\3;\3;\3;\3;\3;\3<\3<\3<\3<\3<\3<\3=\3=\3"+
		"=\3=\3=\3>\3>\3>\3>\3>\3?\3?\3?\3@\3@\3@\3@\3A\3A\3A\3A\3A\3A\3A\3B\3"+
		"B\3B\3B\3C\3C\3C\3C\3C\3D\3D\3D\3D\3D\3D\3E\3E\5E\u017b\nE\3F\6F\u017e"+
		"\nF\rF\16F\u017f\3G\3G\3G\3G\3G\3H\3H\7H\u0189\nH\fH\16H\u018c\13H\3I"+
		"\3I\7I\u0190\nI\fI\16I\u0193\13I\3J\3J\3J\3J\7J\u0199\nJ\fJ\16J\u019c"+
		"\13J\3J\3J\3K\3K\3K\3K\3K\3K\3L\6L\u01a7\nL\rL\16L\u01a8\3L\3L\3M\3M\3"+
		"M\3N\3N\3N\3N\3N\3O\3O\3O\5O\u01b8\nO\3O\3O\3O\3O\3P\3P\3P\3P\3P\3Q\3"+
		"Q\3Q\6Q\u01c6\nQ\rQ\16Q\u01c7\3Q\3Q\3R\3R\3R\3R\3R\3R\3R\3R\3S\3S\3S\3"+
		"S\3S\3S\3T\3T\3T\3T\3T\3T\3U\3U\3U\3U\3U\3U\3V\3V\3V\3V\2\2W\5-\7.\t/"+
		"\13\31\r\t\17\n\21\13\23\f\25\r\27\16\31\17\33\20\35\21\37\22!\23#\33"+
		"%\25\'\26)\27+\24-\32/\30\61\2\63\2\65\2\67\29\2;\2=\2?\2A\2C\2E\2G\2"+
		"I\2K\2M\2O\2Q\2S\2U\2W\2Y\2[\2]\2_\2a\2c\2e\34g\35i\36k\37m o!q\"s#u$"+
		"w%y&{\'}(\177)\u0081*\u0083+\u0085,\u0087\2\u0089\2\u008b\6\u008d\7\u008f"+
		"\b\u0091\4\u0093\5\u0095\60\u0097\61\u0099\62\u009b\63\u009d\64\u009f"+
		"\65\u00a1\66\u00a3\2\u00a5\67\u00a78\u00a99\u00ab:\u00ad;\5\2\3\4#\4\2"+
		"CCcc\4\2DDdd\4\2EEee\4\2FFff\4\2GGgg\4\2HHhh\4\2IIii\4\2JJjj\4\2KKkk\4"+
		"\2LLll\4\2MMmm\4\2NNnn\4\2OOoo\4\2PPpp\4\2QQqq\4\2RRrr\4\2SSss\4\2TTt"+
		"t\4\2UUuu\4\2VVvv\4\2WWww\4\2XXxx\4\2YYyy\4\2ZZzz\4\2[[{{\4\2\\\\||\3"+
		"\2\62;\3\2C\\\6\2\62;C\\aac|\3\2c|\3\2\f\f\4\2\13\17\"\"\5\2\f\f$$^^\2"+
		"\u01d3\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2"+
		"\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3"+
		"\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2"+
		"%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2e\3"+
		"\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2"+
		"\2\2s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2"+
		"\177\3\2\2\2\2\u0081\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u008b\3"+
		"\2\2\2\2\u008d\3\2\2\2\2\u008f\3\2\2\2\2\u0091\3\2\2\2\2\u0093\3\2\2\2"+
		"\2\u0095\3\2\2\2\2\u0097\3\2\2\2\2\u0099\3\2\2\2\2\u009b\3\2\2\2\3\u009d"+
		"\3\2\2\2\3\u009f\3\2\2\2\3\u00a1\3\2\2\2\3\u00a3\3\2\2\2\4\u00a5\3\2\2"+
		"\2\4\u00a7\3\2\2\2\4\u00a9\3\2\2\2\4\u00ab\3\2\2\2\4\u00ad\3\2\2\2\5\u00af"+
		"\3\2\2\2\7\u00b4\3\2\2\2\t\u00b8\3\2\2\2\13\u00be\3\2\2\2\r\u00c1\3\2"+
		"\2\2\17\u00c3\3\2\2\2\21\u00c5\3\2\2\2\23\u00c7\3\2\2\2\25\u00c9\3\2\2"+
		"\2\27\u00cb\3\2\2\2\31\u00cd\3\2\2\2\33\u00cf\3\2\2\2\35\u00d1\3\2\2\2"+
		"\37\u00d3\3\2\2\2!\u00d5\3\2\2\2#\u00d7\3\2\2\2%\u00da\3\2\2\2\'\u00dc"+
		"\3\2\2\2)\u00de\3\2\2\2+\u00e0\3\2\2\2-\u00e2\3\2\2\2/\u00e5\3\2\2\2\61"+
		"\u00e7\3\2\2\2\63\u00e9\3\2\2\2\65\u00eb\3\2\2\2\67\u00ed\3\2\2\29\u00ef"+
		"\3\2\2\2;\u00f1\3\2\2\2=\u00f3\3\2\2\2?\u00f5\3\2\2\2A\u00f7\3\2\2\2C"+
		"\u00f9\3\2\2\2E\u00fb\3\2\2\2G\u00fd\3\2\2\2I\u00ff\3\2\2\2K\u0101\3\2"+
		"\2\2M\u0103\3\2\2\2O\u0105\3\2\2\2Q\u0107\3\2\2\2S\u0109\3\2\2\2U\u010b"+
		"\3\2\2\2W\u010d\3\2\2\2Y\u010f\3\2\2\2[\u0111\3\2\2\2]\u0113\3\2\2\2_"+
		"\u0115\3\2\2\2a\u0117\3\2\2\2c\u0119\3\2\2\2e\u011b\3\2\2\2g\u0121\3\2"+
		"\2\2i\u0126\3\2\2\2k\u0129\3\2\2\2m\u012c\3\2\2\2o\u012f\3\2\2\2q\u0138"+
		"\3\2\2\2s\u013c\3\2\2\2u\u0141\3\2\2\2w\u0146\3\2\2\2y\u014b\3\2\2\2{"+
		"\u0151\3\2\2\2}\u0156\3\2\2\2\177\u015b\3\2\2\2\u0081\u015e\3\2\2\2\u0083"+
		"\u0162\3\2\2\2\u0085\u0169\3\2\2\2\u0087\u016d\3\2\2\2\u0089\u0172\3\2"+
		"\2\2\u008b\u017a\3\2\2\2\u008d\u017d\3\2\2\2\u008f\u0181\3\2\2\2\u0091"+
		"\u0186\3\2\2\2\u0093\u018d\3\2\2\2\u0095\u0194\3\2\2\2\u0097\u019f\3\2"+
		"\2\2\u0099\u01a6\3\2\2\2\u009b\u01ac\3\2\2\2\u009d\u01af\3\2\2\2\u009f"+
		"\u01b7\3\2\2\2\u00a1\u01bd\3\2\2\2\u00a3\u01c5\3\2\2\2\u00a5\u01cb\3\2"+
		"\2\2\u00a7\u01d3\3\2\2\2\u00a9\u01d9\3\2\2\2\u00ab\u01df\3\2\2\2\u00ad"+
		"\u01e5\3\2\2\2\u00af\u00b0\7,\2\2\u00b0\u00b1\7+\2\2\u00b1\u00b2\3\2\2"+
		"\2\u00b2\u00b3\b\2\2\2\u00b3\6\3\2\2\2\u00b4\u00b5\7$\2\2\u00b5\u00b6"+
		"\7\2\2\3\u00b6\u00b7\b\3\3\2\u00b7\b\3\2\2\2\u00b8\u00b9\7*\2\2\u00b9"+
		"\u00ba\7,\2\2\u00ba\u00bb\3\2\2\2\u00bb\u00bc\7\2\2\3\u00bc\u00bd\b\4"+
		"\4\2\u00bd\n\3\2\2\2\u00be\u00bf\7?\2\2\u00bf\u00c0\7@\2\2\u00c0\f\3\2"+
		"\2\2\u00c1\u00c2\7*\2\2\u00c2\16\3\2\2\2\u00c3\u00c4\7+\2\2\u00c4\20\3"+
		"\2\2\2\u00c5\u00c6\7<\2\2\u00c6\22\3\2\2\2\u00c7\u00c8\7B\2\2\u00c8\24"+
		"\3\2\2\2\u00c9\u00ca\7=\2\2\u00ca\26\3\2\2\2\u00cb\u00cc\7.\2\2\u00cc"+
		"\30\3\2\2\2\u00cd\u00ce\7-\2\2\u00ce\32\3\2\2\2\u00cf\u00d0\7/\2\2\u00d0"+
		"\34\3\2\2\2\u00d1\u00d2\7,\2\2\u00d2\36\3\2\2\2\u00d3\u00d4\7\61\2\2\u00d4"+
		" \3\2\2\2\u00d5\u00d6\7\u0080\2\2\u00d6\"\3\2\2\2\u00d7\u00d8\7>\2\2\u00d8"+
		"\u00d9\7/\2\2\u00d9$\3\2\2\2\u00da\u00db\7?\2\2\u00db&\3\2\2\2\u00dc\u00dd"+
		"\7}\2\2\u00dd(\3\2\2\2\u00de\u00df\7\177\2\2\u00df*\3\2\2\2\u00e0\u00e1"+
		"\7>\2\2\u00e1,\3\2\2\2\u00e2\u00e3\7>\2\2\u00e3\u00e4\7?\2\2\u00e4.\3"+
		"\2\2\2\u00e5\u00e6\7\60\2\2\u00e6\60\3\2\2\2\u00e7\u00e8\t\2\2\2\u00e8"+
		"\62\3\2\2\2\u00e9\u00ea\t\3\2\2\u00ea\64\3\2\2\2\u00eb\u00ec\t\4\2\2\u00ec"+
		"\66\3\2\2\2\u00ed\u00ee\t\5\2\2\u00ee8\3\2\2\2\u00ef\u00f0\t\6\2\2\u00f0"+
		":\3\2\2\2\u00f1\u00f2\t\7\2\2\u00f2<\3\2\2\2\u00f3\u00f4\t\b\2\2\u00f4"+
		">\3\2\2\2\u00f5\u00f6\t\t\2\2\u00f6@\3\2\2\2\u00f7\u00f8\t\n\2\2\u00f8"+
		"B\3\2\2\2\u00f9\u00fa\t\13\2\2\u00faD\3\2\2\2\u00fb\u00fc\t\f\2\2\u00fc"+
		"F\3\2\2\2\u00fd\u00fe\t\r\2\2\u00feH\3\2\2\2\u00ff\u0100\t\16\2\2\u0100"+
		"J\3\2\2\2\u0101\u0102\t\17\2\2\u0102L\3\2\2\2\u0103\u0104\t\20\2\2\u0104"+
		"N\3\2\2\2\u0105\u0106\t\21\2\2\u0106P\3\2\2\2\u0107\u0108\t\22\2\2\u0108"+
		"R\3\2\2\2\u0109\u010a\t\23\2\2\u010aT\3\2\2\2\u010b\u010c\t\24\2\2\u010c"+
		"V\3\2\2\2\u010d\u010e\t\25\2\2\u010eX\3\2\2\2\u010f\u0110\t\26\2\2\u0110"+
		"Z\3\2\2\2\u0111\u0112\t\27\2\2\u0112\\\3\2\2\2\u0113\u0114\t\30\2\2\u0114"+
		"^\3\2\2\2\u0115\u0116\t\31\2\2\u0116`\3\2\2\2\u0117\u0118\t\32\2\2\u0118"+
		"b\3\2\2\2\u0119\u011a\t\33\2\2\u011ad\3\2\2\2\u011b\u011c\5\65\32\2\u011c"+
		"\u011d\5G#\2\u011d\u011e\5\61\30\2\u011e\u011f\5U*\2\u011f\u0120\5U*\2"+
		"\u0120f\3\2\2\2\u0121\u0122\59\34\2\u0122\u0123\5G#\2\u0123\u0124\5U*"+
		"\2\u0124\u0125\59\34\2\u0125h\3\2\2\2\u0126\u0127\5;\35\2\u0127\u0128"+
		"\5A \2\u0128j\3\2\2\2\u0129\u012a\5A \2\u012a\u012b\5;\35\2\u012bl\3\2"+
		"\2\2\u012c\u012d\5A \2\u012d\u012e\5K%\2\u012en\3\2\2\2\u012f\u0130\5"+
		"A \2\u0130\u0131\5K%\2\u0131\u0132\5?\37\2\u0132\u0133\59\34\2\u0133\u0134"+
		"\5S)\2\u0134\u0135\5A \2\u0135\u0136\5W+\2\u0136\u0137\5U*\2\u0137p\3"+
		"\2\2\2\u0138\u0139\5G#\2\u0139\u013a\59\34\2\u013a\u013b\5W+\2\u013br"+
		"\3\2\2\2\u013c\u013d\5G#\2\u013d\u013e\5M&\2\u013e\u013f\5M&\2\u013f\u0140"+
		"\5O\'\2\u0140t\3\2\2\2\u0141\u0142\5O\'\2\u0142\u0143\5M&\2\u0143\u0144"+
		"\5M&\2\u0144\u0145\5G#\2\u0145v\3\2\2\2\u0146\u0147\5W+\2\u0147\u0148"+
		"\5?\37\2\u0148\u0149\59\34\2\u0149\u014a\5K%\2\u014ax\3\2\2\2\u014b\u014c"+
		"\5].\2\u014c\u014d\5?\37\2\u014d\u014e\5A \2\u014e\u014f\5G#\2\u014f\u0150"+
		"\59\34\2\u0150z\3\2\2\2\u0151\u0152\5\65\32\2\u0152\u0153\5\61\30\2\u0153"+
		"\u0154\5U*\2\u0154\u0155\59\34\2\u0155|\3\2\2\2\u0156\u0157\59\34\2\u0157"+
		"\u0158\5U*\2\u0158\u0159\5\61\30\2\u0159\u015a\5\65\32\2\u015a~\3\2\2"+
		"\2\u015b\u015c\5M&\2\u015c\u015d\5;\35\2\u015d\u0080\3\2\2\2\u015e\u015f"+
		"\5K%\2\u015f\u0160\59\34\2\u0160\u0161\5].\2\u0161\u0082\3\2\2\2\u0162"+
		"\u0163\5A \2\u0163\u0164\5U*\2\u0164\u0165\5[-\2\u0165\u0166\5M&\2\u0166"+
		"\u0167\5A \2\u0167\u0168\5\67\33\2\u0168\u0084\3\2\2\2\u0169\u016a\5K"+
		"%\2\u016a\u016b\5M&\2\u016b\u016c\5W+\2\u016c\u0086\3\2\2\2\u016d\u016e"+
		"\7v\2\2\u016e\u016f\5S)\2\u016f\u0170\5Y,\2\u0170\u0171\59\34\2\u0171"+
		"\u0088\3\2\2\2\u0172\u0173\7h\2\2\u0173\u0174\5\61\30\2\u0174\u0175\5"+
		"G#\2\u0175\u0176\5U*\2\u0176\u0177\59\34\2\u0177\u008a\3\2\2\2\u0178\u017b"+
		"\5\u0087C\2\u0179\u017b\5\u0089D\2\u017a\u0178\3\2\2\2\u017a\u0179\3\2"+
		"\2\2\u017b\u008c\3\2\2\2\u017c\u017e\t\34\2\2\u017d\u017c\3\2\2\2\u017e"+
		"\u017f\3\2\2\2\u017f\u017d\3\2\2\2\u017f\u0180\3\2\2\2\u0180\u008e\3\2"+
		"\2\2\u0181\u0182\7$\2\2\u0182\u0183\3\2\2\2\u0183\u0184\bG\5\2\u0184\u0185"+
		"\bG\6\2\u0185\u0090\3\2\2\2\u0186\u018a\t\35\2\2\u0187\u0189\t\36\2\2"+
		"\u0188\u0187\3\2\2\2\u0189\u018c\3\2\2\2\u018a\u0188\3\2\2\2\u018a\u018b"+
		"\3\2\2\2\u018b\u0092\3\2\2\2\u018c\u018a\3\2\2\2\u018d\u0191\t\37\2\2"+
		"\u018e\u0190\t\36\2\2\u018f\u018e\3\2\2\2\u0190\u0193\3\2\2\2\u0191\u018f"+
		"\3\2\2\2\u0191\u0192\3\2\2\2\u0192\u0094\3\2\2\2\u0193\u0191\3\2\2\2\u0194"+
		"\u0195\7/\2\2\u0195\u0196\7/\2\2\u0196\u019a\3\2\2\2\u0197\u0199\n \2"+
		"\2\u0198\u0197\3\2\2\2\u0199\u019c\3\2\2\2\u019a\u0198\3\2\2\2\u019a\u019b"+
		"\3\2\2\2\u019b\u019d\3\2\2\2\u019c\u019a\3\2\2\2\u019d\u019e\bJ\5\2\u019e"+
		"\u0096\3\2\2\2\u019f\u01a0\7*\2\2\u01a0\u01a1\7,\2\2\u01a1\u01a2\3\2\2"+
		"\2\u01a2\u01a3\bK\5\2\u01a3\u01a4\bK\7\2\u01a4\u0098\3\2\2\2\u01a5\u01a7"+
		"\t!\2\2\u01a6\u01a5\3\2\2\2\u01a7\u01a8\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8"+
		"\u01a9\3\2\2\2\u01a9\u01aa\3\2\2\2\u01aa\u01ab\bL\5\2\u01ab\u009a\3\2"+
		"\2\2\u01ac\u01ad\13\2\2\2\u01ad\u01ae\bM\b\2\u01ae\u009c\3\2\2\2\u01af"+
		"\u01b0\7$\2\2\u01b0\u01b1\bN\t\2\u01b1\u01b2\3\2\2\2\u01b2\u01b3\bN\n"+
		"\2\u01b3\u009e\3\2\2\2\u01b4\u01b8\7\2\2\3\u01b5\u01b6\7^\2\2\u01b6\u01b8"+
		"\7\2\2\3\u01b7\u01b4\3\2\2\2\u01b7\u01b5\3\2\2\2\u01b8\u01b9\3\2\2\2\u01b9"+
		"\u01ba\bO\13\2\u01ba\u01bb\3\2\2\2\u01bb\u01bc\bO\f\2\u01bc\u00a0\3\2"+
		"\2\2\u01bd\u01be\7\f\2\2\u01be\u01bf\bP\r\2\u01bf\u01c0\3\2\2\2\u01c0"+
		"\u01c1\bP\f\2\u01c1\u00a2\3\2\2\2\u01c2\u01c6\n\"\2\2\u01c3\u01c4\7^\2"+
		"\2\u01c4\u01c6\13\2\2\2\u01c5\u01c2\3\2\2\2\u01c5\u01c3\3\2\2\2\u01c6"+
		"\u01c7\3\2\2\2\u01c7\u01c5\3\2\2\2\u01c7\u01c8\3\2\2\2\u01c8\u01c9\3\2"+
		"\2\2\u01c9\u01ca\bQ\16\2\u01ca\u00a4\3\2\2\2\u01cb\u01cc\7*\2\2\u01cc"+
		"\u01cd\7,\2\2\u01cd\u01ce\3\2\2\2\u01ce\u01cf\7\2\2\3\u01cf\u01d0\bR\17"+
		"\2\u01d0\u01d1\3\2\2\2\u01d1\u01d2\bR\f\2\u01d2\u00a6\3\2\2\2\u01d3\u01d4"+
		"\7*\2\2\u01d4\u01d5\7,\2\2\u01d5\u01d6\3\2\2\2\u01d6\u01d7\bS\5\2\u01d7"+
		"\u01d8\bS\7\2\u01d8\u00a8\3\2\2\2\u01d9\u01da\7,\2\2\u01da\u01db\7+\2"+
		"\2\u01db\u01dc\3\2\2\2\u01dc\u01dd\bT\5\2\u01dd\u01de\bT\n\2\u01de\u00aa"+
		"\3\2\2\2\u01df\u01e0\13\2\2\2\u01e0\u01e1\7\2\2\3\u01e1\u01e2\bU\20\2"+
		"\u01e2\u01e3\3\2\2\2\u01e3\u01e4\bU\f\2\u01e4\u00ac\3\2\2\2\u01e5\u01e6"+
		"\13\2\2\2\u01e6\u01e7\3\2\2\2\u01e7\u01e8\bV\5\2\u01e8\u00ae\3\2\2\2\17"+
		"\2\3\4\u017a\u017f\u018a\u0191\u019a\u01a6\u01a8\u01b7\u01c5\u01c7\21"+
		"\3\2\2\3\3\3\3\4\4\b\2\2\7\3\2\7\4\2\3M\5\3N\6\6\2\2\3O\7\4\2\2\3P\b\5"+
		"\2\2\3R\t\3U\n";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}