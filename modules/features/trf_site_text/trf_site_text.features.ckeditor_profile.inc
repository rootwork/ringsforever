<?php
/**
 * @file
 * trf_site_text.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function trf_site_text_ckeditor_profile_defaults() {
  $data = array(
    'Basic' => array(
      'name' => 'Basic',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'PasteFromWord\',\'Styles\',\'Bold\',\'Italic\',\'-\',\'RemoveFormat\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'linkit\',\'Unlink\',\'-\',\'IMCE\',\'Image\',\'ring\',\'video_filter\',\'HorizontalRule\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h3;h4;h5;pre;div',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%t/css/styles.css',
        'css_style' => 'self',
        'styles_path' => '%t/ckeditor.styles.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.autoGrow_maxHeight = 400;
config.autoGrow_onStartup = true;',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%editor_path%/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalentity' => array(
            'name' => 'drupalentity',
            'desc' => 'Plugin for embedding entities',
            'path' => '/sites/all/modules/contrib/entity_embed/js/plugins/drupalentity/',
            'default' => 'f',
            'buttons' => array(
              'ring' => array(
                'label' => 'Ring',
                'icon' => 'entity.png',
              ),
              'node' => array(
                'label' => 'Content',
                'icon' => 'entity.png',
              ),
            ),
          ),
          'image2' => array(
            'name' => 'image2',
            'path' => '%base_path%sites/all/libraries/ckeditor/plugins/image2/',
            'desc' => 'Plugin for the Enhanced Image widget for CKEditor. See <a href="http://ckeditor.com/addon/image2">addon page</a> for more details.',
            'buttons' => array(
              'button_name' => array(
                'icon' => 'icons/image.png',
                'label' => 'Image',
              ),
            ),
          ),
          'imce' => array(
            'name' => 'imce',
            'desc' => 'Plugin for inserting files from IMCE without image dialog',
            'path' => '%plugin_dir%imce/',
            'buttons' => array(
              'IMCE' => array(
                'label' => 'IMCE',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'icons/linkit.png',
              ),
            ),
          ),
          'video_filter' => array(
            'name' => 'video_filter',
            'desc' => 'Plugin to directly embed videos with the video filter module.',
            'path' => '%base_path%sites/all/modules/contrib/video_filter/editors/ckeditor/',
            'buttons' => array(
              'video_filter' => array(
                'label' => 'Video filter',
                'icon' => 'video_filter.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '%l/ckeditor',
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\',\'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\'],
    [\'IMCE\',\'button_name\',\'ring\',\'video_filter\',\'Table\',\'HorizontalRule\',\'SpecialChar\'],
    [\'Maximize\',\'ShowBlocks\'],
    \'/\',
    [\'Styles\'],
    [\'Bold\',\'Italic\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\'],
    [\'linkit\',\'Unlink\',\'Anchor\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h3;h4;h5;pre;div',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%t/css/styles.css',
        'css_style' => 'self',
        'styles_path' => '%t/ckeditor.styles.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.autoGrow_maxHeight = 400;
config.autoGrow_onStartup = true;',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%editor_path%/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalentity' => array(
            'name' => 'drupalentity',
            'desc' => 'Plugin for embedding entities',
            'path' => '/sites/all/modules/contrib/entity_embed/js/plugins/drupalentity/',
            'default' => 'f',
            'buttons' => array(
              'ring' => array(
                'label' => 'Ring',
                'icon' => 'entity.png',
              ),
              'node' => array(
                'label' => 'Content',
                'icon' => 'entity.png',
              ),
            ),
          ),
          'image2' => array(
            'name' => 'image2',
            'path' => '%base_path%sites/all/libraries/ckeditor/plugins/image2/',
            'desc' => 'Plugin for the Enhanced Image widget for CKEditor. See <a href="http://ckeditor.com/addon/image2">addon page</a> for more details.',
            'buttons' => array(
              'button_name' => array(
                'icon' => 'icons/image.png',
                'label' => 'Image',
              ),
            ),
          ),
          'imce' => array(
            'name' => 'imce',
            'desc' => 'Plugin for inserting files from IMCE without image dialog',
            'path' => '%plugin_dir%imce/',
            'buttons' => array(
              'IMCE' => array(
                'label' => 'IMCE',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'icons/linkit.png',
              ),
            ),
          ),
          'video_filter' => array(
            'name' => 'video_filter',
            'desc' => 'Plugin to directly embed videos with the video filter module.',
            'path' => '%base_path%sites/all/modules/contrib/video_filter/editors/ckeditor/',
            'buttons' => array(
              'video_filter' => array(
                'label' => 'Video filter',
                'icon' => 'video_filter.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
