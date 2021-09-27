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
 * Http Console is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.  
 * 
 * You should have received a copy of the GNU General Public License
 * along with Http Console. If not, see <https://www.gnu.org/licenses/>.
 *
 * func.casp-string-polyfills.inc
 * 
 * PHP-Classic-ASP-polyfills string functions file.
 *
 * @author Daniele Bonini <my25mb@aol.com>
 * @copyrights (c) 2021, 2024, 5 Mode     
 */

/**
 * Left cut the given substring for the specified length 
 * 
 * @param string $string the string being left cut
 * @param int $length the length of the substring to return
 * @return string the resulting substring    
 */
if (!function_exists("left")) {
  function left(string $string, int $length): string 
  {
    if (!isset($string) || $string === "") {
      return "";
    }
    return mb_substr($string, 0, $length);
  }
}

/**
 * Right cut the given string for the specified length 
 * 
 * @param string $string the string being right cut
 * @param int $length the length of the substring to return
 * @return string the resulting substring    
 */
if (!function_exists("right")) {   
  function right(string $string, int $length): string 
  {
    if (!isset($string) || $string === "") {
      return "";
    }  
    return mb_substr($string, mb_strlen($string) - $length);
  }
}

/**
 * Repeat space $num times
 *
 * @param int $num numer of times space should be repeated
 * 
 * @return string space repeated $num times 
 */
if (!function_exists("space")) {   
  function space(int $num): string
  {
    if ($num === 0) {
      return "";
    }
    return str_repeat(" ", $num); 
  }
}
