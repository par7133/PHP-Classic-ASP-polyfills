<?php

/**
 * Copyright 2021, 2024 5 Mode
 *
 * This file is part of "PHP Classic ASP polyfills".
 *
 * "PHP Classic ASP polyfills" is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * "PHP Classic ASP polyfills" is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.  
 * 
 * You should have received a copy of the GNU General Public License
 * along with "PHP Classic ASP polyfills". If not, see <https://www.gnu.org/licenses/>.
 *
 * index.php
 * 
 * PHP-Classic-ASP-polyfills index file.
 *
 * @author Daniele Bonini <my25mb@aol.com>
 * @copyrights (c) 2021, 2024, 5 Mode     
 */

define("FUNCTIONS_PATH", __DIR__.DIRECTORY_SEPARATOR."functions");

// CLASSIC ASP POLYFILLS
require FUNCTIONS_PATH . DIRECTORY_SEPARATOR . "/func.casp-datetime-polyfills.inc";
require FUNCTIONS_PATH . DIRECTORY_SEPARATOR . "/func.casp-string-polyfills.inc";

?>

<pre style="width:500px">
  // left() example
  $s = "Reputation is everything. Almost everything..";
  echo(left($s,10)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php
  $s = "Reputation is everything. Almost everything..";
  echo(left($s,10)."<br><br>");
?> 

<pre style="width:500px">
  // right() example
  $s = "Reputation is everything. Almost everything..";
  echo(right($s,19)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $s = "Reputation is everything. Almost everything..";
  echo(right($s,19)."<br><br>");
?> 

<pre style="width:500px">
  // space() example
  $s = "Reputation is everything. Almost everything..";
  echo(left($s,10).space(5).right($s,35)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $s = "Reputation is everything. Almost everything..";
  echo(left($s,10).space(5).right($s,35)."<br><br>");
?> 

<pre style="width:500px">
  // id_date() example #1
  $s = "Reputation is everything. Almost everything..";
  echo((is_date($s)?"true":"false")."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $s = "Reputation is everything. Almost everything..";
  echo((is_date($s)?"true":"false")."<br><br>");
?> 

<pre style="width:500px">
  // id_date() example #2
  $s = "27/09/2021";
  echo((is_date($s)?"true":"false")."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $s = "27/09/2021";
  echo((is_date($s)?"true":"false")."<br><br>");
?> 

<pre style="width:500px">
  // year() example #1
  $v = "27/09/2021";
  echo(year($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = "09/27/2021";
  echo(year($v)."<br><br>");
?> 

<pre style="width:500px">
  // year() example #2
  $v = new DateTime("09/27/2021");
  echo(year($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021");
  echo(year($v)."<br><br>");
?> 

<pre style="width:500px">
  // month() example
  $v = new DateTime("09/27/2021");
  echo(month($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021");
  echo(month($v)."<br><br>");
?> 

<pre style="width:500px">
  // day() example
  $v = new DateTime("09/27/2021");
  echo(day($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021");
  echo(day($v)."<br><br>");
?> 

<pre style="width:500px">
  // hour() example
  $v = new DateTime("09/27/2021 22:05:55");
  echo(hour($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021 22:05:55");
  echo(hour($v)."<br><br>");
?> 

<pre style="width:500px">
  // minute() example
  $v = new DateTime("09/27/2021 22:05:55");
  echo(minute($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021 22:05:55");
  echo(minute($v)."<br><br>");
?> 

<pre style="width:500px">
  // second() example
  $v = new DateTime("09/27/2021 22:05:55");
  echo(second($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021 22:05:55");
  echo(second($v)."<br><br>");
?> 

<pre style="width:500px">
  // monthName() example
  $v = new DateTime("09/27/2021 22:05:55");
  echo(monthName($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021 22:05:55");
  echo(monthName($v)."<br><br>");
?> 

<pre style="width:500px">
  // weekday() example
  $v = new DateTime("09/27/2021 22:05:55");
  echo(weekday($v)."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $v = new DateTime("09/27/2021 22:05:55");
  echo(weekday($v)."<br><br>");
?> 

<pre style="width:500px">
  // now() example
  echo(now()."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  echo(now()."<br><br>");
?> 

<pre style="width:500px">
  // date_add1() example #1
  $d1 = new DateTime("09/27/2021 22:05:55");
  $d1 = date_add1("Y", 1, $d1);
  echo($d1->format("Y/d/m H:i:s A")."&lt;br&gt;");
</pre>

<b>Result:</b><br>
<?php 
  $d1 = new DateTime("09/27/2021 22:05:55");
  $d1 = date_add1("Y", 1, $d1);
  echo($d1->format("Y/d/m H:i:s A")."<br><br>");
?> 

