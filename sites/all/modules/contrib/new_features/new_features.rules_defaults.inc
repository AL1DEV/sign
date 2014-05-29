<?php
/**
 * @file
 * new_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function new_features_default_rules_configuration() {
  $items = array();
  $items['rules_send_mail'] = entity_import('rules_config', '{ "rules_send_mail" : {
      "LABEL" : "send_mail",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--article" : { "bundle" : "article" } },
      "DO" : [
        { "mail" : {
            "to" : "avramenkodima98@gmail.com",
            "subject" : "Its work",
            "message" : "This is body message",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
