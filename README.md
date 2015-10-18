Ace (Ajax.org Cloud9 Editor)
============================

_Note_: The new site at http://ace.c9.io contains all the info below along with an embedding guide and all the other resources you need to get started with Ace.

Ace is a standalone code editor written in JavaScript. Our goal is to create a browser based editor that matches and extends the features, usability and performance of existing native editors such as TextMate, Vim or Eclipse. It can be easily embedded in any web page or JavaScript application. Ace is developed as the primary editor for [Cloud9 IDE](https://c9.io/) and the successor of the Mozilla Skywriter (Bespin) Project.

Features
--------

* Syntax highlighting for over 120 languages (TextMate/Sublime/_.tmlanguage_ files can be imported)
* Over 20 themes (TextMate/Sublime/_.tmtheme_ files can be imported)
* Automatic indent and outdent
* An optional command line
* Handles huge documents (at last check, 4,000,000 lines is the upper limit)
* Fully customizable key bindings including vim and Emacs modes
* Search and replace with regular expressions
* Highlight matching parentheses
* Toggle between soft tabs and real tabs
* Displays hidden characters
* Drag and drop text using the mouse
* Line wrapping
* Code folding
* Multiple cursors and selections
* Live syntax checker (currently JavaScript/CoffeeScript/CSS/XQuery)
* Cut, copy, and paste functionality

Take Ace for a spin!
--------------------

Check out the Ace live [demo](http://ace.c9.io/build/kitchen-sink.html) or get a [Cloud9 IDE account](https://c9.io/) to experience Ace while editing one of your own GitHub projects.

If you want, you can use Ace as a textarea replacement thanks to the [Ace Bookmarklet](http://ajaxorg.github.io/ace/build/demo/bookmarklet/index.html).

Embedding Ace
-------------

Ace can be easily embedded into any existing web page. You can either use one of pre-packaged versions of [ace](https://github.com/ajaxorg/ace-builds/) (just copy one of `src*` subdirectories somewhere into your project), or use requireJS to load contents of [lib/ace](https://github.com/ajaxorg/ace/tree/master/lib/ace) as `ace`


The easiest version is simply:

```html
<html>
<h2>Introduction</h2>

<p>What the article/code snippet does, why it&#39;s useful, the problem it solves etc.</p>

<h2>Background</h2>

<p>(Optional) Is there any background to this article that may be useful such as an introduction to the basic ideas presented?</p>

<h2>Using the code</h2>

<p>A brief description of how to use the article or code. The class names, the methods and properties, any tricks or tips.</p>

<p>Blocks of code should be set as style &quot;Formatted&quot; like this:</p>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cm" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">/*</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cm" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">* Copyright (c) 2012 The Native Client Authors. All rights reserved.</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cm" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">* Use of this source code is governed by a BSD-style license that can be</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cm" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">* found in the LICENSE file.</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cm" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">*/</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &lt;stdio.h&gt;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &lt;stdlib.h&gt;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &lt;string.h&gt;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &quot;native_client/src/include/elf.h&quot;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &quot;native_client/src/include/elf_constants.h&quot;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &quot;native_client/src/shared/platform/nacl_check.h&quot;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="cp" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">#include &quot;native_client/src/trusted/validator/driver/elf_load.h&quot;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">namespace</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">elf_load</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="kt" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 187, 0);">void</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ReadImage</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="kt" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 187, 0);">char</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">filename</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Image</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">FILE</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fopen</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">filename</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;rb&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">==</code> <code class="nb" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">NULL</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Failed to open input file: %s</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">filename</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fseek</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">SEEK_END</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">size_t</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">file_size</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ftell</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">-&gt;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">resize</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">file_size</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fseek</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">SEEK_SET</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">size_t</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">got</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fread</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)[</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">],</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">file_size</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">got</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">!=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">file_size</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Unable to read image from input file: %s</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">filename</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fclose</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">fp</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">template</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">typename</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ElfEhdrType</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">typename</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ElfPhdrType</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Segment</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">FindTextSegment</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Image</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="c1" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">// Initialization only to suppress &#39;uninitialized&#39; warning.</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Segment</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">segment</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code><code class="nb" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">NULL</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">};</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="kt" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 187, 0);">bool</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">found</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="kc" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">false</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ElfEhdrType</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">reinterpret_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ElfEhdrType</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">[</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">]);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">CHECK</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">sizeof</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">size</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">());</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">CHECK</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">memcmp</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">e_ident</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ELFMAG</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">SELFMAG</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">==</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">for</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">uint64_t</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">index</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">index</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">e_phnum</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">++</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">index</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">uint64_t</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr_offset</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">e_phoff</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">+</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">e_phentsize</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">index</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="c1" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">// static_cast to silence msvc on 32-bit platform</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ElfPhdrType</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">reinterpret_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ElfPhdrType</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">[</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">static_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">size_t</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr_offset</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)]);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="c1" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">// TODO(shcherbina): size of other loadable segments</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_type</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">==</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">PT_LOAD</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;&amp;</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_flags</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">PF_X</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">))</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">found</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;More than one text segment.</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_flags</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">!=</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">PF_R</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">|</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">PF_X</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">))</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="c1" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">// Cast to support 64-bit ELF.</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Text segment is expected to have flags PF_R | PF_X &quot;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;(has 0x%&quot;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">NACL_PRIx64</code> <code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot; instead).</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">static_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">uint64_t</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_flags</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">));</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">CHECK</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_filesz</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;=</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_memsz</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_filesz</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_memsz</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;File image is smaller than memory image size.</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="c1" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">// TODO(shcherbina): find or introduce proper constant.</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_filesz</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">256</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;&lt;</code> <code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">20</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Test segment is too large.</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_vaddr</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">UINT32_MAX</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">-</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_filesz</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Text segment does not fit in 4GB.</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">segment</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">data</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">[</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">static_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">size_t</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_offset</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)];</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">segment</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">size</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">static_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">uint32_t</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_filesz</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">segment</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">vaddr</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">static_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">uint32_t</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">phdr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">p_vaddr</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">found</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="kc" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">true</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">if</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">!</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">found</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Text segment not found.</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">return</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">segment</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;">&nbsp;</div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Architecture</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">GetElfArch</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Image</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="c1" style="font-style: italic; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(0, 136, 0);">// e_machine field is the same for Elf32_Ehdr and Elf64_Ehdr.</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Elf32_Ehdr</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">=</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">reinterpret_cast</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&lt;</code><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">const</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">Elf32_Ehdr</code> <code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">*&gt;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">&amp;</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">image</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">[</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">0</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">]);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">switch</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">e_machine</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">)</code> <code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">{</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">case</code> <code class="nl" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(160, 160, 0);">EM_386:</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">return</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">X86_32</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">case</code> <code class="nl" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(160, 160, 0);">EM_X86_64:</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">return</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">X86_64</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">case</code> <code class="nl" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(160, 160, 0);">EM_ARM:</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">return</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">ARM</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">;</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="k" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(170, 34, 255);">default</code><code class="o" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">:</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">printf</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;Unsupported e_machine %&quot;</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">NACL_PRIu16</code> <code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;.</code><code class="se" style="font-weight: bold; font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 102, 34);">\n</code><code class="s" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(187, 68, 68);">&quot;</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">,</code> <code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">header</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">.</code><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">e_machine</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="n" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">exit</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">(</code><code class="mi" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px; color: rgb(102, 102, 102);">1</code><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">);</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div class="line" style="font-family: Arial, Helvetica, sans-serif; height: 15px; color: rgb(0, 0, 0); font-size: 12px; padding-right: 1em !important; padding-left: 1em !important; white-space: pre !important;"><code class="p" style="font-family: 'Courier New', Arial, 'Trebuchet MS', Helvetica, sans-serif; font-size: 12px;">}</code></div>

<div>&nbsp;</div>

<p>&nbsp;</p>

<p>Remember to set the Language of your code snippet using the Language dropdown.</p>

<p>Use the &quot;var&quot; button to to wrap Variable or class names in &lt;code&gt; tags like <code>this</code>.</p>

<h2>Points of Interest</h2>

<p>Did you learn anything interesting/fun/annoying while writing the code? Did you do anything particularly clever or wild or zany?</p>

<h2>History</h2>

<p>Keep a running update of any changes or improvements you&#39;ve made here.</p>

</html>
```

With "editor" being the id of the DOM element, which should be converted to an editor. Note that this element must be explicitly sized and positioned `absolute` or `relative` for Ace to work. e.g.
```c
#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*head;
 
 
 
void append(int num)
{
    struct node *temp,*right;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    right=(struct node *)head;
    while(right->next != NULL)
    right=right->next;
    right->next =temp;
    right=temp;
    right->next=NULL;
}
 
 
 
void add( int num )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if (head== NULL)
    {
    head=temp;
    head->next=NULL;
    }
    else
    {
    temp->next=head;
    head=temp;
    }
}
void addafter(int num, int loc)
{
    int i;
    struct node *temp,*left,*right;
    right=head;
    for(i=1;i<loc;i++)
    {
    left=right;
    right=right->next;
    }
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    left->next=temp;
    left=temp;
    left->next=right;
    return;
}
 
 
 
void insert(int num)
{
    int c=0;
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
    add(num);
    }
    else
    {
    while(temp!=NULL)
    {
        if(temp->data<num)
        c++;
        temp=temp->next;
    }
    if(c==0)
        add(num);
    else if(c<count())
        addafter(num,++c);
    else
        append(num);
    }
}
 
 
 
int delete(int num)
{
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL)
    {
    if(temp->data==num)
    {
        if(temp==head)
        {
        head=temp->next;
        free(temp);
        return 1;
        }
        else
        {
        prev->next=temp->next;
        free(temp);
        return 1;
        }
    }
    else
    {
        prev=temp;
        temp= temp->next;
    }
    }
    return 0;
}
 
 
void  display(struct node *r)
{
    r=head;
    if(r==NULL)
    {
    return;
    }
    while(r!=NULL)
    {
    printf("%d ",r->data);
    r=r->next;
    }
    printf("\n");
}
 
 
int count()
{
    struct node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
    n=n->next;
    c++;
    }
    return c;
}
 
 
int  main()
{
    int i,num;
    struct node *n;
    head=NULL;
    while(1)
    {
    printf("\nList Operations\n");
    printf("===============\n");
    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Size\n");
    printf("4.Delete\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");
    if(scanf("%d",&i)<=0){
        printf("Enter only an Integer\n");
        exit(0);
    } else {
        switch(i)
        {
        case 1:      printf("Enter the number to insert : ");
                 scanf("%d",&num);
                 insert(num);
                 break;
        case 2:     if(head==NULL)
                {
                printf("List is Empty\n");
                }
                else
                {
                printf("Element(s) in the list are : ");
                }
                display(n);
                break;
        case 3:     printf("Size of the list is %d\n",count());
                break;
        case 4:     if(head==NULL)
                printf("List is Empty\n");
                else{
                printf("Enter the number to delete : ");
                scanf("%d",&num);
                if(delete(num))
                    printf("%d deleted successfully\n",num);
                else
                    printf("%d not found in the list\n",num);
                }
                break;
        case 5:     return 0;
        default:    printf("Invalid option\n");
        }
    }
    }
    return 0;
}
```
```css
    #editor {
        position: absolute;
        width: 500px;
        height: 400px;
    }
```

To change the theme simply include the Theme's JavaScript file

```html
    <script src="src/theme-twilight.js" type="text/javascript" charset="utf-8"></script>
```

and configure the editor to use the theme:

```javascript
    editor.setTheme("ace/theme/twilight");
```

By default the editor only supports plain text mode; many other languages are available as separate modules. After including the mode's JavaScript file:

```html
    <script src="src/mode-javascript.js" type="text/javascript" charset="utf-8"></script>
```

The mode can then be used like this:

```javascript
    var JavaScriptMode = ace.require("ace/mode/javascript").Mode;
    editor.session.setMode(new JavaScriptMode());
```

to destroy editor use

```javascript
    editor.destroy();
    editor.container.remove();
```


Documentation
-------------

Additional usage information, including events to listen to and extending syntax highlighters, can be found [on the main Ace website](http://ace.c9.io).

You can also find API documentation at [http://ace.c9.io/#nav=api](http://ace.c9.io/#nav=api).

Also check out the sample code for the kitchen sink [demo app](https://github.com/ajaxorg/ace/blob/master/demo/kitchen-sink/demo.js).

If you still need help, feel free to drop a mail on the [ace mailing list](http://groups.google.com/group/ace-discuss), or at `irc.freenode.net#ace`.

Running Ace
-----------

After the checkout Ace works out of the box. No build step is required. To try it out, simply start the bundled mini HTTP server: 

```bash
    ./static.py
```

Or using Node.JS

```bash
    npm install mime
    node ./static.js
```

The editor can then be opened at http://localhost:8888/kitchen-sink.html. 

To open the editor with a file:/// URL see [the wiki](https://github.com/ajaxorg/ace/wiki/Running-Ace-from-file).

Building Ace
-----------

You do not generally need to build ACE. The [ace-builds repository](https://github.com/ajaxorg/ace-builds/) endeavours to maintain the latest build, and you can just copy one of _src*_ subdirectories somewhere into your project.

However, all you need is Node.js and npm installed to package ACE. Just run `npm install` in the ace folder to install dependencies:

```bash
    npm install
    node ./Makefile.dryice.js
```

To package Ace, we use the dryice build tool developed by the Mozilla Skywriter team. Call `node Makefile.dryice.js` on the command-line to start the packing. This build script accepts the following options

```bash
-m                 minify build files with uglify-js          
-nc                namespace require and define calls with "ace"
-bm                builds the bookmarklet version
--target ./path    specify relative path for output folder (default value is "./build")
```

To generate all the files in the ace-builds repository, run `node Makefile.dryice.js full --target ../ace-builds`

Running the Unit Tests
----------------------

The Ace unit tests can run on node.js. Assuming you have already done `npm install`, just call:

```bash
    node lib/ace/test/all.js
```

You can also run the tests in your browser by serving:

    http://localhost:8888/lib/ace/test/tests.html

This makes debugging failing tests way more easier.

Contributing
-----------------------------

Ace is a community project and wouldn't be what it is without contributions! We actively encourage and support contributions. The Ace source code is released under the BSD License. This license is very simple, and is friendly to all kinds of projects, whether open source or not. Take charge of your editor and add your favorite language highlighting and keybindings!

Feel free to fork and improve/enhance Ace any way you want. If you feel that the editor or the Ace community will benefit from your changes, please open a pull request. For more information on our contributing guidelines, see [CONTRIBUTING.md](https://github.com/ajaxorg/ace/blob/master/CONTRIBUTING.md).

Continuous Integration status
-----------------------------

This project is tested with [Travis CI](http://travis-ci.org)
[![Build Status](https://secure.travis-ci.org/ajaxorg/ace.png?branch=master)](http://travis-ci.org/ajaxorg/ace)


