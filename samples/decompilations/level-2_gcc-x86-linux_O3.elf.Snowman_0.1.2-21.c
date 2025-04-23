
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_1040(void* ecx, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10);

void short_multiplication_table(void* ecx, void* a2) {
    void* ebx3;
    void* ebx4;
    void* ebp5;
    void* edi6;
    void* v7;
    void* v8;
    void* v9;
    void* v10;
    void* v11;
    void* v12;
    void* v13;
    void* v14;
    void* v15;
    void* v16;
    void* v17;
    void* eax18;
    void* ebp19;
    void* eax20;
    void* v21;
    void* v22;
    void* v23;
    void* ecx24;
    void* ebp25;
    void* v26;
    void* v27;
    void* v28;
    void* ecx29;
    void* v30;
    void* v31;
    void* edx32;
    void* ebp33;
    void* v34;
    void* ebp35;
    void* v36;
    void* ebp37;
    void* v38;
    void* v39;
    void* v40;
    void* ebp41;
    void* v42;

    __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx4) + 0x29fb);
    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + reinterpret_cast<int32_t>(a2));
    edi6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx3) - 0x1fd6);
    fun_1040(ecx, edi6, 0, a2, 0, v7, v8, v9, v10, v11);
    fun_1040(ecx, edi6, 1, a2, a2, edi6, 0, a2, 0, v12);
    fun_1040(ecx, edi6, 2, a2, ebp5, v13, v14, v15, v16, v17);
    eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int32_t>(a2));
    ebp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 4);
    eax20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx3) - 0x1fc4);
    fun_1040(ecx, eax20, 3, a2, eax18, edi6, 2, a2, ebp5, eax20);
    fun_1040(ecx, edi6, 4, a2, ebp19, eax20, eax18, v21, v22, v23);
    ecx24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp19) + reinterpret_cast<int32_t>(a2));
    ebp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 8);
    fun_1040(ecx24, edi6, 5, a2, ecx24, edi6, 4, a2, ebp19, eax20);
    v26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax18) + reinterpret_cast<int32_t>(eax18));
    fun_1040(ecx24, edi6, 6, a2, v26, eax20, eax18, v27, ecx24, v28);
    ecx29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp25) - reinterpret_cast<int32_t>(a2));
    fun_1040(ecx29, v26, 7, a2, ecx29, edi6, 6, a2, v26, eax20);
    fun_1040(ecx29, edi6, 8, a2, ebp25, eax20, eax18, v30, ecx24, v31);
    edx32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp25) + reinterpret_cast<int32_t>(a2));
    fun_1040(ecx29, edi6, 9, a2, edx32, edi6, 8, a2, ebp25, eax20);
    ebp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx24) + reinterpret_cast<int32_t>(ecx24));
    fun_1040(ecx24, edi6, 10, a2, ebp33, eax20, eax18, edx32, ecx24, v34);
    fun_1040(ecx24, ebp33, 11, a2, reinterpret_cast<int32_t>(ebp33) + reinterpret_cast<int32_t>(a2), edi6, 10, a2, ebp33, eax20);
    ebp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax18) * 4);
    fun_1040(ecx24, edi6, 12, a2, ebp35, eax20, eax18, edx32, ecx24, v36);
    ebp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) << 4);
    fun_1040(ecx24, edi6, 13, a2, reinterpret_cast<int32_t>(ebp35) + reinterpret_cast<int32_t>(a2), edi6, 12, a2, ebp35, eax20);
    v38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 14);
    fun_1040(ecx24, edi6, 14, a2, v38, eax20, eax18, edx32, ecx24, v39);
    fun_1040(ecx24, v38, 15, a2, reinterpret_cast<int32_t>(ebp37) - reinterpret_cast<int32_t>(a2), edi6, 14, a2, v38, eax20);
    fun_1040(ecx24, edi6, 16, a2, ebp37, eax20, eax18, edx32, ecx24, v40);
    fun_1040(ecx24, edi6, 17, a2, reinterpret_cast<int32_t>(ebp37) + reinterpret_cast<int32_t>(a2), edi6, 16, a2, ebp37, eax20);
    ebp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx32) + reinterpret_cast<int32_t>(edx32));
    fun_1040(ecx24, edi6, 18, a2, ebp41, eax20, eax18, edx32, ecx24, v42);
    fun_1040(ecx24, ebp41, 19, a2, reinterpret_cast<int32_t>(ebp41) + reinterpret_cast<int32_t>(a2), edi6, 18, a2, ebp41, eax20);
    return;
}

void fun_1050(void* ecx, int32_t a2, void* a3);

void count_sheep(void* ecx, void* a2) {
    void* ebx3;
    void* ebx4;
    void* esi5;
    void* v6;
    void* v7;
    void* ebx8;
    void* esi9;
    void* v10;
    void* v11;
    void* v12;
    void* v13;
    void* v14;
    void* v15;
    void* v16;
    void* v17;
    void* v18;
    void* v19;
    void* v20;
    void* v21;
    void* v22;
    void* v23;
    void* v24;
    void* v25;
    void* v26;
    void* v27;
    void* v28;
    void* v29;
    void* v30;
    void* v31;
    void* v32;
    void* v33;
    void* v34;
    void* v35;
    void* v36;
    void* v37;
    void* v38;
    void* v39;
    void* v40;
    void* v41;
    void* v42;
    void* v43;
    void* v44;
    void* v45;
    void* v46;
    void* v47;
    void* v48;
    void* v49;
    void* v50;
    void* v51;
    void* v52;
    void* v53;
    void* v54;
    void* v55;
    void* v56;
    void* v57;
    void* v58;
    void* v59;
    void* v60;
    void* v61;
    void* v62;
    void* v63;
    void* v64;
    void* v65;
    void* v66;
    void* v67;
    void* v68;
    void* v69;
    void* v70;
    void* v71;
    void* v72;
    void* v73;
    void* v74;
    void* v75;
    void* v76;
    void* v77;
    void* v78;
    void* v79;
    void* v80;
    void* v81;
    void* v82;
    void* v83;
    void* v84;
    void* v85;
    void* v86;
    void* v87;
    void* v88;
    void* v89;
    void* v90;
    void* v91;
    void* v92;
    void* v93;
    void* v94;
    void* v95;
    void* v96;
    void* v97;
    void* v98;
    void* v99;
    void* v100;
    void* v101;
    void* v102;
    void* v103;
    void* v104;
    void* v105;
    void* v106;
    void* v107;
    void* v108;
    void* v109;
    void* v110;
    void* v111;
    void* v112;
    void* v113;
    void* v114;
    void* v115;
    void* v116;
    void* v117;
    void* v118;
    void* v119;
    void* v120;
    void* v121;
    void* v122;
    void* v123;
    void* v124;
    void* v125;
    void* v126;
    void* v127;
    void* v128;
    void* v129;
    void* v130;
    void* v131;
    void* v132;
    void* v133;
    void* v134;
    void* v135;
    void* v136;
    void* v137;
    void* v138;
    void* v139;
    void* v140;
    void* v141;
    void* v142;
    void* v143;
    void* v144;
    void* v145;
    void* v146;
    void* v147;
    void* v148;
    void* v149;
    void* v150;
    void* v151;
    void* v152;
    void* v153;
    void* v154;
    void* v155;
    void* v156;
    void* v157;
    void* v158;
    void* v159;
    void* v160;
    void* v161;
    void* v162;
    void* v163;
    void* v164;
    void* v165;
    void* v166;
    void* v167;
    void* v168;
    void* v169;
    void* v170;
    void* v171;
    void* v172;
    void* v173;
    void* v174;
    void* v175;
    void* v176;
    void* v177;
    void* v178;
    void* v179;
    void* v180;
    void* v181;
    void* v182;
    void* v183;
    void* v184;
    void* v185;
    void* v186;
    void* v187;
    void* v188;
    void* v189;
    void* v190;
    void* v191;
    void* v192;
    void* v193;
    void* v194;
    void* v195;
    void* v196;
    void* v197;
    void* v198;
    void* v199;
    void* v200;
    void* v201;
    void* v202;
    void* v203;
    void* v204;
    void* v205;
    void* v206;
    void* v207;
    void* v208;
    void* v209;
    void* v210;

    __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx4) + 0x2e1d);
    esi5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx3) - 0x1fec);
    fun_1040(ecx, esi5, 0, v6, v7, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(ecx, esi5, 1, v10, v11, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 2, v12, v13, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 3, v14, v15, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 4, v16, v17, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 5, v18, v19, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 6, v20, v21, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 7, v22, v23, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 8, v24, v25, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 9, v26, v27, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 10, v28, v29, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 11, v30, v31, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 12, v32, v33, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 13, v34, v35, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 14, v36, v37, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 15, v38, v39, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 16, v40, v41, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 17, v42, v43, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 18, v44, v45, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 19, v46, v47, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 20, v48, v49, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 21, v50, v51, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 22, v52, v53, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 23, v54, v55, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 24, v56, v57, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 25, v58, v59, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 26, v60, v61, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 27, v62, v63, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 28, v64, v65, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 29, v66, v67, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 30, v68, v69, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 31, v70, v71, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 32, v72, v73, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 33, v74, v75, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 34, v76, v77, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 35, v78, v79, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 36, v80, v81, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 37, v82, v83, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 38, v84, v85, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 39, v86, v87, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 40, v88, v89, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 41, v90, v91, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 42, v92, v93, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 43, v94, v95, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 44, v96, v97, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 45, v98, v99, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 46, v100, v101, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 47, v102, v103, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 48, v104, v105, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 49, v106, v107, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 50, v108, v109, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 51, v110, v111, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 52, v112, v113, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 53, v114, v115, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 54, v116, v117, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 55, v118, v119, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 56, v120, v121, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 57, v122, v123, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 58, v124, v125, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 59, v126, v127, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 60, v128, v129, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 61, v130, v131, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 62, v132, v133, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 63, v134, v135, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 64, v136, v137, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 65, v138, v139, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 66, v140, v141, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 67, v142, v143, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 68, v144, v145, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 69, v146, v147, 0x11d7, ebx8, esi9, __return_address(), a2);
    v148 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx3) - 0x1fe8);
    fun_1040(esi5, v148, 69, v149, v150, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(v148, esi5, 70, v151, v152, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(v148, esi5, 71, v153, v154, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 72, v155, v156, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 73, v157, v158, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 74, v159, v160, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 75, v161, v162, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 76, v163, v164, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 77, v165, v166, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 78, v167, v168, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 79, v169, v170, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 80, v171, v172, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 81, v173, v174, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 82, v175, v176, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 83, v177, v178, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 84, v179, v180, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 85, v181, v182, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 86, v183, v184, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 87, v185, v186, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 88, v187, v188, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 89, v189, v190, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 90, v191, v192, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 91, v193, v194, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 92, v195, v196, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 93, v197, v198, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 94, v199, v200, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 95, v201, v202, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 96, v203, v204, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 97, v205, v206, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 98, v207, v208, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1040(esi5, esi5, 99, v209, v210, 0x11d7, ebx8, esi9, __return_address(), a2);
    fun_1050(esi5, reinterpret_cast<int32_t>(ebx3) - 0x1fe0, 99);
    return;
}

void fun_1060(int32_t a1) {
    int32_t ebx2;

    goto *reinterpret_cast<int32_t*>(ebx2 - 16);
}

/* __x86.get_pc_thunk.dx */
void __x86_get_pc_thunk_dx() {
    return;
}

struct s0 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_1040(void* ecx, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10) {
    struct s0* ebx11;

    goto ebx11->f10;
}

struct s1 {
    signed char[20] pad20;
    int32_t f14;
};

void fun_1050(void* ecx, int32_t a2, void* a3) {
    struct s1* ebx4;

    goto ebx4->f14;
}

void fun_10c8(int32_t a1, void** a2, int32_t a3) {
    return;
}

struct s2 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_1030(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    struct s2* ebx9;

    goto ebx9->fc;
}

void deregister_tm_clones(int32_t a1) {
    int32_t edx2;
    int32_t edx3;
    int32_t ecx4;
    int32_t eax5;

    __x86_get_pc_thunk_dx();
    edx2 = edx3 + 0x2f0f;
    ecx4 = edx2 + 32;
    if (edx2 + 32 == ecx4 || (eax5 = *reinterpret_cast<int32_t*>(edx2 - 20), eax5 == 0)) {
        return;
    } else {
        eax5(ecx4);
        return;
    }
}

void _init() {
    int32_t eax1;
    int32_t ebx2;

    __x86_get_pc_thunk_bx();
    eax1 = *reinterpret_cast<int32_t*>(ebx2 + 0x2feb - 12);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t main() {
    void* ecx1;

    ecx1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    short_multiplication_table(ecx1, 19);
    count_sheep(ecx1, 19);
    return 0;
}

struct s3 {
    signed char[28] pad28;
    int32_t f1c;
    signed char f20;
};

void fun_1172() {
    uint48_t v1;
    int16_t ds2;
    struct s3* ebx3;
    void* ebx4;
    int32_t v5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(ebx4) + 0x2e77);
    if (!ebx3->f20) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx3) - 16)) {
            v5 = ebx3->f1c;
            fun_1060(v5);
        }
        deregister_tm_clones(0x117d);
        ebx3->f20 = 1;
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_11c2() {
    uint48_t v1;
    int16_t ds2;
    int32_t edx3;
    int32_t edx4;
    uint32_t ecx5;
    uint32_t eax6;
    int32_t eax7;
    int32_t edx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_dx();
    edx3 = edx4 + 0x2ecf;
    ecx5 = edx3 + 32;
    eax6 = edx3 + 32 - ecx5;
    eax7 = reinterpret_cast<int32_t>((eax6 >> 31) + (reinterpret_cast<int32_t>(eax6) >> 2)) >> 1;
    if (eax7 && (edx8 = *reinterpret_cast<int32_t*>(edx3 - 4), !!edx8)) {
        edx8(ecx5, eax7);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void _start() {
    void* esp1;
    void** v2;
    int32_t edx3;
    int32_t eax4;
    int32_t v5;
    int32_t ebx6;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    v2 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4);
    fun_10c8(edx3, v2, eax4);
    v5 = *reinterpret_cast<int32_t*>(ebx6 + 0x2f44 - 8);
    fun_1030(v5, __return_address(), esp1, 0, 0, edx3, v2, eax4);
    __asm__("hlt ");
}

void fun_1113() {
}

void fun_1119() {
}

void fun_1167() {
}

void fun_11bb() {
}

void fun_102c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

struct s4 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_1046() {
    struct s4* ebx1;

    goto ebx1->f8;
}

void fun_1056() {
    goto 0x1020;
}

void fun_1036() {
    goto 0x1020;
}
