// Sourced from https://github.com/NickStephens/Clite
package clite;


public class Print extends Statement {
	
	Expression to_print;

	public Print(Expression expr) {
		to_print = expr;
	}
}
