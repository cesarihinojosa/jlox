package com.craftinginterpreters;

abstract class Expr {
    static class Binary extends Expr {
        Binary(Expr left, Token operator, Expr right){
            this.left = left;
            this.operator = operator;
            this.right = right;
        }
        final Expr left; // investigate this further
        final Token operator;
        final Expr right;
    }
    
}