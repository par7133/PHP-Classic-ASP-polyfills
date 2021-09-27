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
 * func.casp-datetime-polyfills.inc
 * 
 * PHP-Classic-ASP-polyfills datetime functions file.
 *
 * @author Daniele Bonini <my25mb@aol.com>
 * @copyrights (c) 2021, 2024, 5 Mode     

 //Classic Asp
 * function is_date(string $date) {}
 * function year(?mixed $date) {}
 * function month(?mixed $date) {}
 * function day(?mixed $date) {}
 * function hour(?mixed $date) {}
 * function minute(?mixed $date) {}
 * function second(?mixed $date) {}
 * function monthName(?mixed $date) {}
 * function weekday(?mixed $date) {}
 * function now() {}

 //other stuff simplified:
 * function date_add1(string $intervalType, int $interval, ?mixed $date) {}
 *
 */


/**
 * Check if the given string is a valid date 
 * 
 * @param string $string the string to check
 * @return bool if the string is a valid date, true/false    
 */
if (!function_exists("is_date")) { 
  function is_date(string $string): bool
  {
    $retval = date_parse($string);
    
    if (is_array($retval) && !empty($retval["year"])) {
      return true;
    } else {
      return false;      
    }  
  }
}

/**
 * Return the year of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the year of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("year")) { 
  function year($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("Y");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("Y");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("Y");
      $d=null;
    } else {
      // any other case than..      
    }
    return $retval;    
  }
}

/**
 * Return the month of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the month of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("month")) { 
  function month($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("n");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("n");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("n");
      $d=null;
    } else {
      // any other case than..      
    }
    return $retval;    
  }
}

/**
 * Return the day of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the day of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("day")) {
  function day($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("j");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("j");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("j");
      $d=null;
    } else {
      // any other case than..      
    }
    return $retval;    
  }
}

/**
 * Return the hour of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the hour of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("hour")) {
  function hour($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("G");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("G");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("G");
      $d=null;
    } else {
      // any other case than..      
    }
    return $retval;    
  }
}

/**
 * Return the minutes of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the minutes of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("minute")) {
  function minute($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("i");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("i");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("i");
      $d=null;
    } else {
      // any other case than..      
    }
    if (substr($retval,0,1)==="0") {
      $retval = substr($retval,1);
    }  
    return $retval;    
  }
}

/**
 * Return the seconds of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the seconds of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("second")) {
  function second($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("s");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("s");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("s");
      $d=null;
    } else {
      // any other case than..      
    }
    if (substr($retval,0,1)==="0") {
      $retval = substr($retval,1);
    }  
    return $retval;    
  }
}

/**
 * Return the month name of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the month name of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("monthName")) {
  function monthName($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("F");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("F");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("F");
      $d=null;
    } else {
      // any other case than..      
    }
    return $retval;    
  }
}

/**
 * Return the week day of the given date or now 
 * 
 * @param mixed $date DateTime or string date paramenter, otherwise now 
 * @return string the week day of the given date, if the date is valid, otherwise a blank string    
 */
if (!function_exists("weekday")) {
  function weekday($date): string
  {
    $retval = "";
    if (isset($date) && ($date instanceof DateTime)) {
      $d = $date;
      $retval=$d->format("l");
      $d=null;
    } else if (isset($date) && (is_string($date) && is_date($date))) { 
      $d = new DateTime($date);
      $retval=$d->format("l");
      $d=null;
    } else if (!isset($date)) {
      $d = new DateTime();
      $retval=$d->format("l");
      $d=null;
    } else {
      // any other case than..      
    }
    return $retval;    
  }
}

/**
 * Return the current date 
 * 
 * @return DateTime the current date
 */
if (!function_exists("now")) {
  function now(): string
  {
      $d = new DateTime();
      $retval=$d->format("Y/d/m H:i:s A");
      $d=null;
      return $retval;  
  }
}

/**
 * Add the specified interval to the given date
 *
 * @param string $intervalType the type of interval to add to the string
 *               it can be one of the followin values: 
 *
 *               Y - Year
 *               m - Month
 *               W - Weeks 
 *               d - Day
 *               H - Hour
 *               i - Minute
 *               s - Second
 *
 * @param int $interval the interval to add (or subtract if negtive)
 * @param mixed $date the date to add the interval to
 * 
 * @return the resulting date otherwise false in case of error
 */
if (!function_exists("date_add1")) {
  function date_add1(string $intervalType, int $interval, $date)
  {
     $retval = false;
     
     if (!isset($intervalType) || !isset($interval)) {
       return $retval;
     }
     
     if ($interval === 0) {
       return $retval;
     }
     
     // Parsing $date
     if (isset($date) && ($date instanceof DateTime)) {
       $d = $date;
     } else if (isset($date) && (is_string($date) && is_date($date))) { 
       $d = new DateTime($date);
     } else if (!isset($date)) {
       $d = new DateTime();
     } else {
       // any other case than..
       return $retval;      
     }   
     
     if ($interval > 0) {
     
       switch($intervalType)
       {
         case "Y":
           date_add($date, date_interval_create_from_date_string($interval . ' years'));
           break;
         case "m":
           date_add($date, date_interval_create_from_date_string($interval . ' months'));
           break;
         case "W":
           $days = $interval * 7;
           date_add($date, date_interval_create_from_date_string($interval . ' days'));
           break;
         case "d":
           date_add($date, date_interval_create_from_date_string($interval . ' days'));
           break;
         case "H":
           date_add($date, date_interval_create_from_date_string($interval . ' hours'));
           break;
         case "i":
           date_add($date, date_interval_create_from_date_string($interval . ' minutes'));
           break;
         case "s":
           date_add($date, date_interval_create_from_date_string($interval . ' seconds'));
           break;
         default:
           return $retval;  
       }

     } else { 

       switch($intervalType)
       {
         case "Y":
           date_sub($date, date_interval_create_from_date_string($interval . ' years'));
           break;
         case "m":
           date_sub($date, date_interval_create_from_date_string($interval . ' months'));
           break;
         case "W":
           $days = $interval * 7;
           date_sub($date, date_interval_create_from_date_string($interval . ' days'));
           break;
         case "d":
           date_sub($date, date_interval_create_from_date_string($interval . ' days'));
           break;
         case "H":
           date_sub($date, date_interval_create_from_date_string($interval . ' hours'));
           break;
         case "i":
           date_sub($date, date_interval_create_from_date_string($interval . ' minutes'));
           break;
         case "s":
           date_sub($date, date_interval_create_from_date_string($interval . ' seconds'));
           break;
         default:
           return $retval;  
       }

     }
     
     return $date;
  }
}
