	escape_sequences['\''] = "\\\'";
    escape_sequences['"'] = "\\\"";
    escape_sequences['\\'] = "\\\\";
    escape_sequences['?'] = "\\\?";
    escape_sequences['a'] = "\\a";
    escape_sequences['b'] = "\\b";
    escape_sequences['f'] = "\\f";
    escape_sequences['n'] = "\\n";
    escape_sequences['r'] = "\\r";
    escape_sequences['t'] = "\\t";
    escape_sequences['v'] = "\\v";

	ops.insert("("); 
	ops.insert(")"); 
	ops.insert(":");
	ops.insert("{");
	ops.insert("}");
	ops.insert("[");
	ops.insert("]");
	ops.insert("+");
	ops.insert("-");
	ops.insert("=");
	ops.insert(">");
	ops.insert("<");
	ops.insert("/");
	ops.insert("*");
	ops.insert("%");
	ops.insert("!");
	ops.insert("~");
	ops.insert("&");
	ops.insert("|");
	ops.insert("^");
	ops.insert("?");
	ops.insert(".");
	ops.insert(";");
	ops.insert("--");
	ops.insert("++");
	ops.insert("==");
	ops.insert(">>");
	ops.insert("<<");
	ops.insert("<=");
	ops.insert(">=");
	ops.insert("!=");
	ops.insert("&&");
	ops.insert("||");
	ops.insert("+=");
	ops.insert("-=");
	ops.insert("*=");
	ops.insert("/=");
	ops.insert("%=");
	ops.insert("&=");
	ops.insert("|=");
	ops.insert("^=");
	ops.insert("->");
	ops.insert("<<=");
	ops.insert(">>=");

	keywords.insert("break");
	keywords.insert("case");
	keywords.insert("char");
	keywords.insert("const");
	keywords.insert("continue");
	keywords.insert("default");
	keywords.insert("do");
	keywords.insert("else");
	keywords.insert("enum"); 
	keywords.insert("extern");
	keywords.insert("float");
	keywords.insert("for");
	keywords.insert("goto");
	keywords.insert("if");
	keywords.insert("int");
	keywords.insert("register");
	keywords.insert("return");
	keywords.insert("signed");
	keywords.insert("sizeof");
	keywords.insert("static");
	keywords.insert("struct");
	keywords.insert("switch");
	keywords.insert("typedef");
	keywords.insert("union");
	keywords.insert("unsigned");
	keywords.insert("void");
	keywords.insert("while");