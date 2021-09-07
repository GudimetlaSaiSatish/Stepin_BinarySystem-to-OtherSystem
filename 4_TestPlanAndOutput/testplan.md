# TEST PLAN

## Table 1: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P**   | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------- |-------------|----------------|------------------|
|  H_01       |Binary to Decimal Conversion.                                 |Valid Binary string  |Decimal Value | PASS          |Requirement based |
|  H_02       |Binary to Decimal Conversion.                                 |Invalid Binary string  |Shows Invalid Binary input | PASS          |Requirement based |
|  H_03       |Binary to Octal Conversion.                                   |Valid Binary string  |Octal value String | PASS          |Requirement based |
|  H_04       |Binary to Decimal Conversion.                                 |Invalid Binary string  |Shows Invalid Binary input | PASS          |Requirement based |
|  H_05       |Binary to Hexadecimal Conversion.                             |Valid Binary string  |Hexadeciaml Value String | PASS          |Requirement based |
|  H_06       |Binary to Decimal Conversion.                                 |Invalid Binary string  |Shows Invalid Binary input | PASS          |Requirement based |


## Table 2: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Taking Choice from User| choice (1-3)|Respective case statements will be executed|Directing to Switch Block|Scenario based    |
|  L_02       |Taking Choice from User| choice = 0|Respective case statement will be executed|Exiting|Scenario based    |
|  L_03       |Taking Choice from User| Choice is out of range|Showing Invalid Choice|Exiting|Scenario based    |
