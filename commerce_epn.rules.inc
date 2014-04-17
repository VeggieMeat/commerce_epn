<?php

function commerce_epn_rules_action_info() {
  $actions = array();

  $actions['commerce_epn_action_authorize'] = array(
    'label' => t('Authorize credit card transaction'),
    'parameter' => array(
      'epnaccount' => array(
        'type' => 'string',
        'label' => t('ePN Account'),
      ),
      'card'
    ),
  );
}
