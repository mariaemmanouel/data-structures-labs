[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/eT90wKKF)
![run-tests](../../workflows/run-tests/badge.svg)

## Δομές Δεδομένων και Τεχνικές Προγραμματισμού

### Κώδικας Εργαστηρίου 5

Εκφώνηση: https://k08.chatzi.org/labs/lab5/ 

2. Η πολυπλοκότητα της συνάρτησης set_visit είναι O(n) και για τις τρεις υλοποιήσεις (BST, AVL, B-Tree). Αυτό οφείλεται στο ότι γίνεται πλήρη διάσχιση του set. Η set_first απαιτεί O(logn) για το AVL και B-Tree και O(n) για το BST αλλά οι n διαδοχικές κλήσεις της set_next κοστίζουν συνολικά O(n) χρόνο
3. Η πολυπλοκότητα της set_visit και για τις τρεις υλοποιήσεις παραμένει O(n) γιατί γίνεται και πάλι πλήρη διάσχιση του set, αλλά γίνεται σε μειωμένο πραγματικό χρόνο εκτέλεσης αφού λόγω της αναδρομής αποφεύγουμε τη set_next