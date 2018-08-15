package com.fta.testndk;

public class Hello {
    static {
        System.loadLibrary("hello");
    }

    public static native String sayHello();
}
