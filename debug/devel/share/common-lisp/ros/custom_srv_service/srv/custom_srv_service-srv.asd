
(cl:in-package :asdf)

(defsystem "custom_srv_service-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "custom_srv" :depends-on ("_package_custom_srv"))
    (:file "_package_custom_srv" :depends-on ("_package"))
  ))