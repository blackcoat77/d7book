<?php

/**
 * This function demo_menu_hide_admin() is called from page callback menu item
 * and it serves to denied access from prying eyes
 * 
 * @param  $wildcard 
 * @return   array() with elements
 */
function demo_menu_hide_admin($wildcard)  {
    if(is_numeric($wildcard) && ($account = user_load($wildcard)))  {
        return array(
            '#type' => 'markup',
            '#markup' => t("Welcome %username", array('%username' => $account->name)),
        );
    }
 else {
        return drupal_not_found();    
    }
}