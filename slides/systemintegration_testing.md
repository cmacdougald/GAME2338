<!DOCTYPE html>
<html>
  <head>
    <title>GAME 2338 - Smoke, Functional, & Unit Testing</title>
    <meta charset="utf-8">
    <style>
      @import url(https://fonts.googleapis.com/css?family=Yanone+Kaffeesatz);
      @import url(https://fonts.googleapis.com/css?family=Droid+Serif:400,700,400italic);
      @import url(https://fonts.googleapis.com/css?family=Ubuntu+Mono:400,700,400italic);

      body { font-family: 'Droid Serif'; }
      h1, h2, h3 {
        font-family: 'Yanone Kaffeesatz';
        font-weight: normal;
      }
      .remark-code, .remark-inline-code { font-family: 'Ubuntu Mono'; }
    </style>
  </head>
  <body>
    <textarea id="source">

class: center, middle

# Smoke, Functional, & Unit Testing
      
<img align="center" src="https://www.xenonstack.com/images/insights/xenonstack-what-is-smoke-testing.png" alt="Smoke Testing" width="640" height="480">

---

# Definitions

* Smoke Testing
  * “Build Verification Testing”, is a type of software testing that comprises of a non-exhaustive set of tests that aim at ensuring that the most important functions work. The result of this testing is used to decide if a build is stable enough to proceed with further testing. It can also be used to decide whether to announce a production release or to revert. The term ‘smoke testing’, it is said, came to software testing from a similar type of hardware testing, in which the device passed the test if it did not catch fire (or smoked) the first time it was turned on.
  
* Functional Testing
  * is a type of software testing that validates the software system against the functional requirements/specifications. The purpose of Functional tests is to test each function of the software application, by providing appropriate input, verifying the output against the Functional requirements.

> https://softwaretestingfundamentals.com/smoke-testing/
> https://www.guru99.com/functional-testing.html
      
---

# Definitions
      
* Unit Testing
  * also known as COMPONENT TESTING,  is a level of software testing where individual units / components of a software are tested. The purpose is to validate that each unit of the software performs as designed.

> https://softwaretestingfundamentals.com/unit-testing/

---

# Benefits

* uncovers problems early
* increases confidence in changing / maintaining code
* Codes is more reusable
* Development is faster
* cost of fixing a defect detected during testing is lesser in comparison to that of defects detected at higher levels

---

# Balance

* Usually depends on code coverage and level of quality requirements
   

---

# Getting Started

* Language Specific
* Tool Selection
* Planning, Designing, and Development
* Executing Test Cases and Build your reports
* Maintaining previous test cases

---
   
# Scope
      
* What are you actually testing and what do you want to accomplish?

# Tool Selection
      
* Obvious research what tools and compare/contrast
      
---
   
# Planning, Designing, and Development

* Proof of Concept
* Prototype
* Rigging
* Test Templates
* Documentation, Documentation, Documentation!
      
---

# Executing Test Cases and Build your reports

* Run in your CI/CD pipeline
* Important to run failures
* Tests should fail fast
* Reports should be easy to read and understand results
* Results should be global to company and/or teams

# Maintaining previous test cases

* Tests require Tender, Love, and Care (TLC)

---

# Assignment 

* 

---

# Tutorial

* 

---

# Resources
 
* https://www.sitepoint.com/testing-functional-javascript/
* https://docs.python-guide.org/writing/tests/

.center[![Fewer Tests]()]

    </textarea>
    <script src="https://remarkjs.com/downloads/remark-latest.min.js">
    </script>
    <script>
      var slideshow = remark.create();
    </script>
  </body>
</html>
